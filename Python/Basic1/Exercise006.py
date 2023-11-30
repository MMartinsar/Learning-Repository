# Write a program that accepts a sequence of comma-separated numbers from the user and generates a list and a tuple of those numbers.

numbers = input("Give me a sequence of comma-separated numbers: ")

list1 = numbers.split(", ")
tuple1 = tuple(list1)

print("List: ", list1)
print("Tuple: ", tuple1)