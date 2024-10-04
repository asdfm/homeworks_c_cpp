#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		printf("%d", a + b);
	}
	else
	{
		printf("%d", b - a);
	}
}