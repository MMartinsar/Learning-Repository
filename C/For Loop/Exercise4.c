#include <stdio.h>

//Write a program to read 10 numbers from the keyboard and find their sum and average.

float main(){

	int ind, i, sum = 0;

	for (i = 0; i < 10; i++) {
		printf("Give me a number:");
		scanf_s("%d", &ind);
		sum += ind;
	}

	printf("The sum is: %d\n", sum);

	return 0; 
}
