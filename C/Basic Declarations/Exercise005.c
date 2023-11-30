#include <stdio.h>

//Write a program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

//I've changed the exercise a bit, having the program asking you for the length and width instead of them being static.

int main() {
	
	int length, width;

	printf("Give me a length for a rectangle:");
	scanf_s("%d", &length);

	printf("Give me a width for a rectangle:");
	scanf_s("%d", &width);

	printf("\nThe perimeter of the rectangle is %d", 2 * (length + width));
	printf("\nThe area of the rectangle is %d\n", length * width);

	return 0;
}
