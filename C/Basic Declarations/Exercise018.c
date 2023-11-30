#include <stdio.h>

//Write a program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.

int main() {

	int days, months, years, st_days;

	printf("Introduce how many days you want to convert: ");
	scanf_s("%d", &days);

	st_days = days;

	years = (int)days / 365;
	days -= years * 365;

	months = (int)days / 30;
	days -= months * 30;

	printf("%d are %d years, %d months and %d days", st_days, years, months, days);

	return 0;
}