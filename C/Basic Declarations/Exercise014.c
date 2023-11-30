#include <stdio.h>

/*Write a program to calculate a bike’s average consumption from the given total distance(integer value)
travelled(in km) and spent fuel(in litters, float number – 2 decimal points).*/

int main() {

	int dist, fuel;
	float avg_cnspt;

	printf("Total distance this trip: ");
	scanf_s("%d", &dist);
	printf("Fuel spent this trip: ");
	scanf_s("%d", &fuel);

	avg_cnspt = dist / fuel;

	printf("Average consumption = %.2f km/lt", avg_cnspt);

	return 0;
}