#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double func(double x) {
	return pow(x, 1.5) * log(2*x);
}

double D4(double x) {
	return 0.5625 * log(2*x) / pow(x, 2.5);
}

void main() {
	int N;
	double z, a, b, tol, K, s, h, S, i, x1, x2, x3;
	i = 1;
	a = 1;
	b = 2;
	x1 = 0;
	x2 = 0;
	x3 = 0;
	s = 0;
	tol = pow(10, -5);
	K = D4(1);
	N = floor(pow((K * pow((b-a), 5) / (180 * tol)), 0.25)) + 1;

	if (N % 2 == 0) {
		N = N;
	}
	else {
		N = N + 1;
	}

	//printf("%d", N);

	h = (b - a) / N;

	while (i <= N/2) {
		x1 = a + (2 * i - 2) * h;
		x2 = a + (2 * i - 1) * h;
		x3 = a + 2 * i * h;
		s = s + func(x1) + 4 * func(x2) + func(x3);
		i = i + 1;
	}
	S = s * h / 3;

	printf("%lf", S);
	//printf("\n%lf \n %lf \n %lf", x1, x2, x3);
	//printf("\n%lf", log(2));
}