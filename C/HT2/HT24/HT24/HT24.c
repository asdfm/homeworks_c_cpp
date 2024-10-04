#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double e(double x) {
	double tol, fact = 1, Si = 1, S = 1;
	int i = 1;
	tol = pow(10, -9);
	while (Si > tol)
	{
		Si = pow(x, i) / fact;
		S = S + Si;
		i = i + 1;
		fact = fact * i;
	}

	return S;
}

void main() {
	double X, err, k, ex, Ex;

	for (k = 0; k <= 5; k = k + 0.25)
	{
		ex = e(k);
		Ex = exp(k);
		err = ex / Ex - 1;
		printf("\n%lf %lf %lf %lf", k, ex, Ex, err);
	}
}