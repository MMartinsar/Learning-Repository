#include <stdio.h>

//Write a program that accepts two integers from the user and calculates the product of the two integers.

int main() {

	int first, second;

	printf("Give me a integer: ");
	scanf_s("%d", &first);

	printf("Give me another integer: ");
	scanf_s("%d", &second);

	printf("\nThe product of both numbers is %d\n", first * second);

	return 0;
}
