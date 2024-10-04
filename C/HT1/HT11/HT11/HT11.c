#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	float x;
	scanf("%f", &x);
	printf("%f", sin((1.8 + sqrt(1 + fabs(2*x)))/(fabs(x*x + 3))));
}