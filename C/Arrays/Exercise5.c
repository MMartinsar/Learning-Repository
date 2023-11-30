#include <stdio.h>

//Write a program to count the total number of duplicate elements in an array.

float main(){

	int i, i2, size, dup = 0, arr[100];

	printf("Give the array a size: ");
	scanf_s("%d", &size);

	for(i = 0; i < size; i++) {
		printf("Give me a number:");
		scanf_s("%d", &arr[i]);
	}

	for (i = 0; i < size; i++) {
		for (i2 = i + 1; i2 < size; i2++) {
			if (arr[i] == arr[i2]) {
				dup++;
				break;
			}
		}
	}
	
	printf("\nNumber of duplicate elements in the array: % d\n", dup);

	return 0; 
}
