#include <stdio.h>
#include <math.h>

//Write a program to print the roots of Bhaskara’s formula from the given three floating numbers.Display a message if it is not possible to find the roots.

int main() {

	double a, b, c, root;

	printf("Give me a:");
	scanf_s("%lf", &a);
	printf("Give me b:");
	scanf_s("%lf", &b);
	printf("Give me c:");
	scanf_s("%lf", &c);

	root = pow(b, 2) - (4 * a * c);

	if (root > 0 && a != 0) {
		
		double x, y;

		x = (-b + sqrt(root)) / (2 * a);
		y = (-b - sqrt(root)) / (2 * a);

		printf("Root1 = %lf\n", x);
		printf("Root2 = %lf", y);
	}
	else {
		printf("Not possible to find the roots");
	}

	return 0;
}