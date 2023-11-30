#include <stdio.h>

//Write a program that accepts three integers and finds the maximum of three.

int main() {

	int n1, n2, n3;

	printf("Give me a number:");
	scanf_s("%d", &n1);

	printf("Give me a second number:");
	scanf_s("%d", &n2);

	printf("Give me a third number:");
	scanf_s("%d", &n3);

	if (n1 >= n2 && n1 >= n3) {

		printf("\nThe biggest number is %d\n", n1);

	} else if (n2 >= n1 && n2 >= n3) {

		printf("\nThe biggest number is %d\n", n2);

	} else if (n3 >= n1 && n3 >= n1) {

		printf("\nThe biggest number is %d\n", n3);

	} else {

		printf("There is no bigger number");

	}

	return 0;
}
