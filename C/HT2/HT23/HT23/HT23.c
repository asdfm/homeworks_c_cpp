#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

void main() {
	int arr[10];
	int max, min, nmax, nmin, i;
	
	srand(time(0));

	for (i = 0; i < 10; i++)
	{
		arr[i] = rand();
	}

	min = arr[0];
	max = arr[0];
	nmax = 0;
	nmin = 0;

	for (i = 0; i < 10; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
			nmin = i;
		}
		else
			min = min;
		if (arr[i] > max) {
			max = arr[i];
			nmax = i;
		}
		else
			max = max;
	}

	printf("%d %d", nmax, max);
	printf("\n%d %d\n", nmin, min);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}