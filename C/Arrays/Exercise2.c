#include <stdio.h>

//Write a program to read n number of values in an array and display them in reverse order.

int main() {

	int i, tam, arr[100];
	printf("Array size:");
	scanf_s("%d", &tam);

	for (i = 0; i < tam; i++) {
		printf("Give me a number:");
		scanf_s("%d", &arr[i]);
	}

	for (i = tam - 1; i >= 0; i--) {
		printf("Number %d: %d\n", i + 1, arr[i]);
	}

	return 0;
}