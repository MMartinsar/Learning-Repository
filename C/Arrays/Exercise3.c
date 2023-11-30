#include <stdio.h>

//Write a program to find the sum of all elements of the array.

int main() {

	int i, tam, arr[100];
	int sum = 0;
	printf("Array size:");
	scanf_s("%d", &tam);

	for (i = 0; i < tam; i++) {
		printf("Give me a number:");
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < tam; i++) {
		printf("Number %d: %d\n", i + 1, arr[i]);
		sum = sum + arr[i];
		printf("Sum process: %d\n", sum);
	}

	printf("Total sum: %d\n", sum);

	return 0;
}