#include <stdio.h>

//Write a program to convert a given integer (in seconds) to hours, minutes and seconds.

int main() {

	int hours, mins, scnds;

	printf("Give me an amount to break down: ");
	scanf_s("%d", &scnds);

	hours = scnds / 3600;
	scnds -= hours * 3600;

	mins = (int)scnds / 60;
	scnds -= mins * 60;

	printf("Hours, minutes and seconds = %d:%d:%d", hours, mins, scnds);

	return 0;
}