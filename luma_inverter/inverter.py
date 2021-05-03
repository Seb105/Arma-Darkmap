import ast
from PIL import Image, ImageDraw
import copy
import colorsys
from time import time
from concurrent.futures import ProcessPoolExecutor

OLD_PATH = "config_colours_old.cpp"
NEW_PATH = "config_colours_patched.cpp"
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
    comparisonImg = Image.new(mode='RGB', size=(2560,2560), color=(255, 255, 255))
    draw = ImageDraw.Draw(comparisonImg)
    print("Reading old config")
    with open(OLD_PATH, "r") as f:
        lines = f.readlines()
    drawY = 0
    drawX = 0
    newlines = []
    lineNo = 0
    print("Analysing config config")
    for line in lines:
        lineNo += 1
        # Make sure we're dealing with a colour set
        startTxt = line.replace(" ","")[:5]
        if "class" in startTxt or "{" in startTxt or "}" in startTxt:
            newlines.append(line)
            continue
        if startTxt.find("color") == -1 or line.find("{") == -1:
            newlines.append(line)
            continue
        colour = line[line.find("{") : line.find("}")+1].replace("{","[").replace("}","]")
        colour = ast.literal_eval(colour)
        if type(colour[0]) is str:
            newlines.append(line)
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

    print("Writing new config")
    with open(NEW_PATH, 'w') as f:
        for line in newlines:
            f.write(line)


    comparisonImg.save(IMAGE_PATH)
    print("Done making new config")

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
    preview_image()