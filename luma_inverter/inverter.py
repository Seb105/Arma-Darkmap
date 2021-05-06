import ast
from PIL import Image, ImageDraw
import copy
import colorsys
from time import time
from concurrent.futures import ProcessPoolExecutor
import re
import subprocess
import shutil

OLD_PATH = "config_colours_old.cpp"
NEW_PATH = "..\\addons\\main\\config_colours_patched.cpp"
IMAGE_PATH = "conversion.png"

def linear_conversion(oldMin,oldMax,oldVal,newMin,newMax):
    oldRange = (oldMax - oldMin)  
    newRange = (newMax - newMin)  
    return (((oldVal - oldMin) * newRange) / oldRange) + newMin

def convert_colour(colour):
    colourHLS = list(colorsys.rgb_to_hls(*colour[0:3]))
    colourHLS[1] = linear_conversion(0, 1, 1 - colourHLS[1], 0.075, 0.85)
    colourHLS[2] = 0.8 * colourHLS[2]
    colour = colorsys.hls_to_rgb(colourHLS[0], colourHLS[1], colourHLS[2])
    colour = [round(v, 3) for v in list(colour)]
    return colour

def pillow_colour(colour):
    return tuple([int(c*255) for c in copy.deepcopy(colour[0:3])])

def main():
    timeTaken = time()
    comparisonImg = Image.new(mode='RGB', size=(2560,2560), color=(255, 255, 255))
    draw = ImageDraw.Draw(comparisonImg)
    print("Reading old config")
    with open(OLD_PATH, "r") as f:
        lines = f.readlines()
    print("Read old config in {0}s".format(round(time() - timeTaken,2)))
    timeTaken = time()
    print("Converting config lines")
    drawY = 0
    drawX = 0
    newlines = []
    for index, line in enumerate(lines):
        # Make sure we're dealing with a colour set
        startTxt = line.replace(" ","")[:5]
        if "TAG::REMOVE" in line:
            continue
        if "class" in startTxt or "{" in startTxt[0] or "}" in startTxt[0]:
            newlines.append(line)
            continue
        if startTxt.find("color") == -1 or line.find("{") == -1:
            continue
        colour = line[line.find("{") : line.find("}")+1].replace("{","[").replace("}","]")
        colour = ast.literal_eval(colour)
        if type(colour[0]) is str:
            continue

        colourOld = copy.deepcopy(colour)
        # Where the actual conversion happens
        colour = list(convert_colour(colour))
        colour.append(colourOld[3])

        # Drawing for debug
        RGBColourOld =  pillow_colour(colourOld)
        RGBColour =     pillow_colour(colour)
        draw.rectangle([(drawX, drawY), (drawX+15, drawY+16)], RGBColourOld)
        draw.rectangle([(drawX+16, drawY), (drawX+31, drawY+16)], RGBColour)
        if drawY >= 2560:
            drawX += 32
            drawY = 0
        else:
            drawY += 16

        #construct newline
        colour = str(colour).replace("[","{").replace("]","}").replace(" ","")
        line = line[: line.find("{")]
        line = "{0}{1};\n".format(line, colour)
        newlines.append(line)
    print("Converted config in {0}s".format(round(time() - timeTaken,2)))
    timeTaken = time()

    print("Removing unreferenced classes and simplifying empty classes")
    iterations = 0
    while True:
        # Replace empty config brackets with simple declarations
        deleteLines = []
        for index, line in enumerate(newlines[:-1]):
            startTxt = line.replace(" ","")[0]
            startTxtNext =  newlines[index+1].replace(" ","")[0]
            if startTxt[0] == "{" and startTxtNext[0] == "}":
                classLine = newlines[index-1]
                strIndex = classLine.find("\n")
                if len(classLine.strip().split(" ")) == 3:
                    classLine = classLine[:strIndex] + " {};" + classLine[strIndex:]
                else:
                    classLine = classLine[:strIndex] + ";" + classLine[strIndex:]
                newlines[index-1] = classLine
                deleteLines.append(index)
                deleteLines.append(index+1)
            #index += 1
        for index in deleteLines:
            newlines[index] = ""
        newlines = [line for line in newlines if line != ""]


        # Remove classes that are not referenced and therefore not needed.
        deleteLines = []
        for index, line in enumerate(newlines):
            lineWords = line.strip().split(" ")
            if lineWords[0] != "class": continue # Only interested in removing classes
            classType = lineWords[1].replace(":","")
            if line.find(";") == -1: continue # If line does not contain semicolon then the class contains data
            classType = classType.replace(";", "")
            numOfReferences = len([l for l in newlines if ": "+classType+"\n" in l or ": "+classType+";" in l])
            if numOfReferences == 0:
                deleteLines.append(index)
        for index in deleteLines:
            newlines[index] = ""
        newlines = [line for line in newlines if line != ""]
        iterations += 1
        if deleteLines == []: break
    print("Simplified classes in {0} iterations and {1}s".format(iterations, round(time() - timeTaken,2)))
    timeTaken = time()

    # Inheriting undeclared class warnings#
    print("WARNINGS:")
    warnings = []
    for index, line in enumerate(newlines):
        lineWords = line.strip().split(" ")
        if lineWords[0] != "class": continue
        if lineWords[1][-1] != ":": continue # Is class inheriting?
        inheritance = lineWords[2].replace(";", "")
        declarations = [line for line in newlines if line.find("class " + inheritance) != -1]
        if len(declarations) == 0:
            warning = "WARNING: class {0} is inherited but never declared".format(inheritance)
            if warning not in warnings: warnings.append(warning)
    if len(warnings) == 0:
        print("No warnings")
    else:
        for warning in warnings:
            print(warning)
    print("Checked for warnings in {0}s".format(round(time() - timeTaken,2)))
    timeTaken = time()

    print("Writing new config")
    with open(NEW_PATH, 'w') as f:
        for line in newlines:
            f.write(line)
    print("Wrote config in {0}s".format(round(time() - timeTaken,2)))
    timeTaken = time()

    print("Building PBO")
    shutil.rmtree("..\\releases")
    subprocess.call("..\\build release.bat")
    print("Built in {0}s".format(round(time() - timeTaken,2)))
    timeTaken = time()

    print("Saving preview image")
    comparisonImg.save(IMAGE_PATH)
    print("Preview image made in in {0}s".format(round(time() - timeTaken,2)))

def preview_pixel(pixel):
    pixel = [p/255 for p in pixel]
    newPixel = convert_colour(pixel)
    newPixel = pillow_colour(newPixel)
    return newPixel

def preview_image():
    print("Building preview image")
    img = Image.open("map_preview_old.png")
    list_of_pixels = list(img.getdata())
    with ProcessPoolExecutor() as executor:
        results = executor.map(preview_pixel, list_of_pixels, chunksize=256)
    new_pixels = list(results)
    img.putdata(new_pixels)
    img.save("map_preview_new.png")
    print("Done writing new image")

if __name__ == '__main__':
    main()
    #preview_image()