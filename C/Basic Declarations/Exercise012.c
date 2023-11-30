#include <stdio.h>

/*Write a program that accepts an employee's ID, total worked hours in a month and the amount he received per hour. 
Print the ID and salary (with two decimal places) of the employee for a particular month.*/

int main() {

	int id, wh;
	float sh;

	printf("Employees's ID: ");
	scanf_s("%d", &id);
	printf("Worked hours in a month: ");
	scanf_s("%d", &wh);
	printf("Salary per hour: ");
	scanf_s("%f", &sh);

	printf("\nEmployee ID: %d", id);
	printf("\nSalary per month: %.2f\n", sh * wh);

	return 0;
}
