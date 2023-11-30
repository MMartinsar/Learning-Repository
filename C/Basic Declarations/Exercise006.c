#include <stdio.h>
#include <math.h>

#define PI 3.141592

//Write a program to compute the perimeter and area of a circle with a given radius.

float main(){

	float radius;

	printf("Give me a radius of a circle: ");
	scanf_s("%f", &radius);

	printf("\nThe perimeter of the circle is: %f", 2 * PI * radius);
	printf("\nThe area of the circle is: %f\n", PI * pow(radius, 2));

	return 0; 
}
