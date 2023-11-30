#include <stdio.h>

//Write a program to compute the sum of the first 10 natural numbers.

float main(){

	int sum = 0;

	printf("First 10 natural numbers: ");
	for (int i = 1; i <= 10; i++) {
		printf("%d ", i);
		sum += i;
	}

	printf("\nThe sum is: %d", sum);

	return 0; 
}
