#include <iostream>
#include <math.h>

using namespace std;

class Vector {
private:
	double x, y;
public:
	void stretch(double a) {
		x = a * x;
		y = a * y;
	}
	double len() {
		return sqrt(x * x + y * y);
	}
	void sum(Vector a, Vector b) {
		x = a.x + b.x;
		y = a.y + b.y;
	}
	void set(double xx, double yy) {
		x = xx;
		y = yy;
	}
	void show() {
		cout << "x = " << x << "; y = " << y << endl;
	}
	void swap(Vector a, Vector b) {
		double tmp;
		tmp = a.x;
		a.x = b.x;
		b.x = tmp;
		tmp = a.y;
		a.y = b.y;
		b.y = tmp;
	}
	Vector(double xx, double yy) {
		Vector a;
		x = xx + a.x;
		y = yy + a.y;
		cout << "Object is created"<< endl;
	}
	Vector(double xx) {
		x = xx;
		y = 0;
		cout << "Object is created" << endl;
	}
	Vector() {
		x = 1;
		y = 0;
		cout << "Object is created" << endl;
	}
	~Vector() {
		cout << "Objeat is deleted" << endl;
	}
};

void main(){
	Vector e(2, 1), f(3, 2);
	//Vector c;
	//c.sum(e, f);
	//c.show();
	e.show();
}