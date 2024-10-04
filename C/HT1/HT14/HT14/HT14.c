#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main() {
	char a;
	int b, c;
	scanf("%c", &a);
	b = (int)a -1;
	c = (int)a + 1;
	printf("%c%c%c", b, a, c);
}