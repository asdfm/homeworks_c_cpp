#include <iostream>
#include <math.h>

using namespace std;

class Vector2;

class Vector {
private:
	double x, y;
public:
	friend void comp_coord(const Vector, const Vector2);
	//friend int test(const Vector, const Vector2);
	Vector(double xx, double yy) {
		x = xx;
		y = yy;
		//cout << "Object is created" << endl;
	}
	Vector(double xx) {
		x = xx;
		y = 0;
		//cout << "Object is created" << endl;
	}
	Vector() {
		x = 1;
		y = 0;
		//cout << "Object is created" << endl;
	}
	~Vector() {
		//cout << "Objeat is deleted" << endl;
	}
};

class Vector2 {
private:
	double x, y;
public:
	friend int test(const Vector, const Vector2);
	Vector2(double xx, double yy) {
		x = xx;
		y = yy;
		//cout << "Object is created" << endl;
	}
	Vector2(double xx) {
		x = xx;
		y = 0;
		//cout << "Object is created" << endl;
	}
	Vector2() {
		x = 1;
		y = 0;
		//cout << "Object is created" << endl;
	}
	~Vector2() {
		//cout << "Objeat is deleted" << endl;
	}
	friend void comp_coord(const Vector, const Vector2);
};

void comp_coord(const Vector v, const Vector2 v2) {
	if (v.x > v2.x) cout << v.x;
	else cout << v2.x << endl;

	if (v.y > v2.y) cout << v.y;
	else cout << v2.y << endl;
};

void main() {
	Vector v1(1, 2);
	Vector2 v2(2, 1);
	comp_coord(v1, v2);
}