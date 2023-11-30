#include <stdio.h>

//Write a program to copy the elements of one array into another array.

float main(){

	int i, size, arr1[100], arr2[100];

	printf("Give the array a size from 1-100: ");
	scanf_s("%d", &size);

	for(i = 0; i < size; i++) {
		printf("Give me a number:");
		scanf_s("%d", &arr1[i]);
	}

	printf("\nFirst array: ");
	for (i = 0; i < size; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n\nCopying in process...\n\n");
	for (i = 0; i < size; i++) {
		arr2[i] = arr1[i];
	}

	printf("Second array: ");
	for (i = 0; i < size; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");

	return 0; 
}
