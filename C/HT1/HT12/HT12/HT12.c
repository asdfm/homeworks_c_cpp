#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void main() {
	int x, y, z;
	scanf("%d", &x);
	y = x / 10 - (x / 100) * 10;
	z = x - (x / 10) * 10;
	printf("10: %d \n1: %d", y, z);
}