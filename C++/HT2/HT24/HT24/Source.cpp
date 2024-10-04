#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

class Square {
private:
	double x, y, phi, a;
public:
	Square(double xx, double yy, double aa, double p) {
		x = xx;
		y = yy;
		a = aa;
		phi = p;
	}
	Square() {
		x = 0;
		y = 0;
		a = 1;
		phi = 0;
	}
	double area() {
		return a * a;
	}
	double perim() {
		return 4 * a;
	}
	void move(double X, double Y) {
		x = x + X;
		y = y + Y;
	}
};