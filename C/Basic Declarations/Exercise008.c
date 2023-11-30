#include <stdio.h>

//Write a C program to convert specified days into years, weeks and days.

int main() {
	
	int days, mod;

	printf("How many days you want to convert?:");
	scanf_s("%d", &days);

	printf("\nYears: %d\n", days / 356);
	mod = days % 356;
	printf("Weeks: %d\n", mod / 7);
	mod = mod % 7;
	printf("Days: %d\n", mod);

	return 0;
}
