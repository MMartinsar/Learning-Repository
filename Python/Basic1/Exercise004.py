# Write a program that calculates the area of a circle based on the radius entered by the user.

import math

r = float(input("Give me a radius for a circle: "))

a = math.pi * (r**2)

print("The area of a circle with a radius of " + str(r) + " is = " + str(a))