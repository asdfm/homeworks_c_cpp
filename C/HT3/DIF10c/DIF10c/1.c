#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double func(double x) {
	return exp(-x * x) - pow(x, 3);
}
double der(double x) {
	return -exp(-x * x) * 2 * x - 3 * pow(x, 2);
}

void main() {
	double z1, z2, tol;
	int i;
	z1 = -2;
	tol = pow(10, -10);
	z2 = 2;
	i = 0;
	while (fabs(z1 - z2) > tol) {
		z2 = z1;
		z1 = z1 - func(z1) / der(z1);
		i++;
	}

	printf("%lf", z1);
}