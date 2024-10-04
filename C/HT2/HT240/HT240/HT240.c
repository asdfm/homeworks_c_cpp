#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main() {
	double x, tol, fact = 1, Si = 1, S = 1;
	int i = 1;
	scanf("%lf", &x);
	tol = pow(10, -9);
	while (Si > tol)
	{
		Si = pow(x, i) / fact;
		S = S + Si;
		i = i + 1;
		fact = fact * i;
	}

	printf("%lf %d", S, i - 1);
}
