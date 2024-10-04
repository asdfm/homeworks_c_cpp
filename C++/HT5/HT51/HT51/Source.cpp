#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

float calc(float a, float b, char c) {
	if ((b == 0) and (c == '/')) throw "dividing by zero";
	if (c == '*') {
		return a * b;
	}
	if (c == '/') {
		return a + b;
	}
}

int main() {
	float a, b;
	cin >> a;
	cin >> b;
	cout << "choose * or /";
	char c;
	cin >> c;
	try {
		a = calc(a, b, c);
	}
	catch (const char* s) {
		cout << s;
		exit (0);
	}
	cout << a;
	return 0;
}