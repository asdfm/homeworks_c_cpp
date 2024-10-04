#include <iostream>
#include <math.h>

using namespace std;

class Vector {
private:
	double x, y;
	char* cp;
public:
	Vector(double xx, double yy, const char *name) {
		x = xx;
		y = yy;
		int len = strlen (name) + 1;
		cp = new char[len];
		strncpy(cp, name, len);
	}
	Vector(const Vector& v) {
		x = v.x;
		y = v.y;
		int len = strlen(v.cp) + 1;
		cp = new char[len];
		strncpy(cp, v.cp, len);
	}
	Vector operator=(const Vector& v) {
		if (this == &v) return*this;
		delete[] cp; 
		x = v.x;
		y = v.y;
		int len = strlen(v.cp) + 1; 
		cp = new char[len]; 
		strncpy(cp, v.cp, len); 
		return*this;
	}
	~Vector() {
		delete[] cp;
	}
	Vector operator+(Vector v) {
		int len = strlen(v.cp) + strlen(cp) + 1;
		char* cp1 = new char[strlen(cp) + 1];
		strncpy(cp1, cp, strlen(cp) + 1);
		strncat(cp1, v.cp, len);
		return Vector(x + v.x, y + v.y, cp1);
		delete[] cp1;
	}

	friend void show(Vector);
};

void show(Vector v) {
	cout << "x = " << v.x << "; y = " << v.y << " ; name: " << v.cp << endl;
}

int main() {

	Vector v1(1, 2, "n1");
	Vector v2(2, 2, "n2");
	Vector v3 = v1 + v2;
	show(v2);
	return 1;
}