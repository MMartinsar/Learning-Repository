#include <stdio.h>

//Write a program to display n terms of natural numbers and their sum.

float main(){

	int ind, sum = 0;

	printf("Give me a number:");
	scanf_s("%d", &ind);

	printf("First %d natural numbers: ", ind);
	for (int i = 1; i <= ind; i++) {
		printf("%d ", i);
		sum += i;
	}

	printf("\nThe sum is: %d", sum);

	return 0; 
}
