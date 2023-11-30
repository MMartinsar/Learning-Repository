# Write a program that accepts a filename from the user and prints the extension of the file.

file = input("""Enter a file name with extension.
Example: Exercise007.py
File name: """)

ext = file.split(".")
print("The extension is: " + str(ext[1]))