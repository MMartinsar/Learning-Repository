#include <stdio.h>

/*Write a program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even.If q is greater than r and
s is greater than pand if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values".*/

int main() {

	int p, q, r, s;

	printf("Introduce an integer: ");
	scanf_s("%d", &p);
	printf("Introduce another integer: ");
	scanf_s("%d", &q);
	printf("Introduce another integer: ");
	scanf_s("%d", &r);
	printf("Introduce one last integer: ");
	scanf_s("%d", &s);

	if ((p % 2 == 0) && (q >= 0) && (r >= 0) && (s >= 0)) {
		if ((q > r) && (s > p) && ((r + s) > (p + q))) {
			printf("Correct values");
		}
	}
	else {
		printf("Wrong values");
	}

	return 0;
}