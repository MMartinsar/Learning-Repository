#include <stdio.h>

//Write a program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.

int main() {

	double w1, n1, w2, n2, average;

	printf("Weight of item 1: ");
	scanf_s("%lf", &w1);
	printf("Number of item: ");
	scanf_s("%lf", &n1);

	printf("Weight of item 2: ");
	scanf_s("%lf", &w2);
	printf("Number of item: ");
	scanf_s("%lf", &n2);

	average = (((w1 * n1) + (w2 * n2))) / (n1 + n2);

	printf("\nAverage value %f\n", average);

	return 0;
}
