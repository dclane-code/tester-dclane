#!/usr/bin/env python3

#this needs to take the value from useful snap's input.h (4) and return double it
import os

#print("{}".format(os.getcwd()))

#print(os.environ)

file_path = os.environ['CRAFT_STAGE']

with open(file_path + "/input.h", 'r') as f:
    contents = f.read()

print(contents)


