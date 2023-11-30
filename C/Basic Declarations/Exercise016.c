#include <stdio.h>

//Write a program to read an amount (integer value) and break the amount into the smallest possible number of bank notes.

int main() {

	int num, total;

	printf("Give me an amount to break down: ");
	scanf_s("%d", &num);

	total = (int)num / 100;

	printf("\n%d units of 100.00\n", total);
	num -= total * 100;
	total = (int)num / 50;

	printf("\n%d units of 50.00\n", total);
	num -= total * 50;
	total = (int)num / 20;

	printf("\n%d units of 20.00\n", total);
	num -= total * 20;
	total = (int)num / 10;

	printf("\n%d units of 10.00\n", total);
	num -= total * 10;
	total = (int)num / 5;

	printf("\n%d units of 5.00\n", total);
	num -= total * 5;
	total = (int)num / 2;

	printf("\n%d units of 2.00\n", total);
	num -= total * 2;
	total = (int)num / 1;

	printf("\n%d units of 1.00\n", total);

	return 0;
}