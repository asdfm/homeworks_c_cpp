#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int i;
	int num;

	scanf("%d", &num);

	//for (i = 7; i >= 0; i--) {
	//	if ((num & (1 << i)) == 0)
	//		continue;
	//	if (num & (1 << i))
	//		break;
	//}

	for (i = 7; i >= 0; i--) {
		if (num & (1 << i)) printf("1");
		else printf("0");
	}
}