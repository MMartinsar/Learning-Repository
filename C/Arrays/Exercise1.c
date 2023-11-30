#include <stdio.h>

//Write a program to store elements in an array and print them.

int main() {

	int i, arr[10];

	for (i = 0; i < 10; i++) {
		printf("Give me a number:");
		scanf_s("%d", &arr[i]);
	}

	printf("Elements in the array are: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}