#include <stdio.h>

struct str_
{
	int i;
	double d;
};

void f(struct str_* s) {
	printf("%d %lf", (*s).i, (*s).d);
}

void main() {
	struct str_ a, * ap;
	ap = &a;
	a.i = 1;
	a.d = 7.0;
	f(ap);
}