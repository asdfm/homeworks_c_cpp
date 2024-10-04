#include <iostream>
#include <math.h>

using namespace std;

class Vector {
private:
	double x, y;
public:
	Vector(double xx, double yy) {
		x = xx;
		y = yy;
	}
	Vector(double xx) {
		x = xx;
		y = 0;
	}
	Vector() {
		x = 1.;
		y = 0.;
	}
	double len() {
		return sqrt(x * x + y * y);
	}
	Vector operator-() {
		return Vector(-x, -y);
	}
	void show() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	Vector operator=(Vector v) {
		x = v.x;
		y = v.y;
		return *this;
	}
	Vector operator*(double a) {
		return Vector(x*a, y*a);
	}
	void operator+=(Vector v) {
		x += v.x;
		y += v.y;
	}
	void operator-=(Vector v) {
		x -= v.x;
		y -= v.y;
	}
	//operator double() {
	//	return sqrt(x * x + y * y);
	//}

	friend Vector operator-(Vector, Vector);
	friend Vector operator*(double, Vector);
};

Vector operator-(Vector v1, Vector v2) {
	return Vector(v1.x - v2.x, v1.y - v2.y);
}

bool operator>(Vector v1, Vector v2) {
	return (v1.len() > v2.len());
}

Vector operator*(double a, Vector v) {
	return Vector(v.x * a, v.y * a);
}

bool operator<(Vector v1, Vector v2) {
	return (v1.len() < v2.len());
}

void main() {
	Vector v(1, 1);
	Vector V(2, 2);
	v = 2*V;

	v.show();
	//cout << v1.len() << endl;
	//cout << (v < v);
	//cout << v1.len() << " " << v2.len();
	//else cout << 0;
	//cout << double(v2);
	//v3.show();
}