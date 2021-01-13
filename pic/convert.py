from PIL import Image
import sys

print("\n")

image = Image.open(input(">>> "))

width = image.size[0]
height = image.size[1]

pixels = image.load()

file = open(input("[.h] >>>"), "w")

file.write("int width = {};\nint height = {};\n".format(width, height))
file.write("int img[{}][{}] = ".format(height, width))
file.write("{\n\t")

for y in range(0, height):
    file.write("{")
    for x in range(0, width):
        file.write(str(pixels[x, y]) + ", ")
    file.write("}, \n\t")

file.write("\n};")
file.flush()
file.close()

print("\n")