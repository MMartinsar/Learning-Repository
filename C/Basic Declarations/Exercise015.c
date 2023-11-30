#include <stdio.h>
#include <math.h>

//Write a program to calculate the distance between two points.

int main() {

	int x1, x2, y1, y2;
	float distance;

	printf("Give me the x of a point: ");
	scanf_s("%d", &x1);
	printf("Give me the y of a point: ");
	scanf_s("%d", &y1);
	printf("Give me the x of another point: ");
	scanf_s("%d", &x2);
	printf("Give me the y of another point: ");
	scanf_s("%d", &y2);

	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	printf("Distance between the said points = %.4f", distance);

	return 0;
}