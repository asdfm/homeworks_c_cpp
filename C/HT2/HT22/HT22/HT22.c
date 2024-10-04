#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int s = 0, z = 0, i = 0, n;
	scanf("%d", &n);
	while (i < n) {
		scanf("%d", &z);
		if (z != 0) {
			s = s + z;
			i = i + 1;
		}
		else
			break;
	}
	
	printf("%d", s);
}