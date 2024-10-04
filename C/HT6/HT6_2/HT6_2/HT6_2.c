#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	FILE* *aap;
	aap = fopen("aa.txt", "r");


	char string[2000];
	while (fgets(string, 2000, aap) != NULL) {
		if (string[0] == '\\')
			continue;
		printf("%s", string);
	}
	fclose(aap);
}