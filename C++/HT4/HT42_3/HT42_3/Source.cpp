#include <iostream>
#include <math.h>

using namespace std;

class Vector {
protected:
	double x, y;
public:
	Vector(double xx=1, double yy=1) {
		x = xx;
		y = yy;
	}
	virtual double len() {
		return sqrt(x * x + y * y);
	}
	Vector operator-() {
		return Vector(-x, -y);
	}
	void show() {
		//return x;
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}
	Vector operator*(double a) {
		return Vector(a * x, a * y);
	}
	Vector operator+=(Vector v) {
		return Vector(x + v.x, y + v.y);
	}
	Vector operator-=(Vector v) {
		return Vector(x - v.x, y - v.y);
	}
	Vector operator-(Vector v) {
		return Vector(x - v.x, y - v.y);
	}
	Vector operator+(Vector v) {
		return Vector(x + v.x, y + v.y);
	}
	void set(double xx, double yy) {
		x = xx;
		y = yy;
	}
	friend Vector operator*(double, Vector);
	friend void operator<<(ostream&, Vector);
};

void operator<<(ostream & os, Vector v) {
	os << "x = " << v.x << endl;
	os << "y = " << v.y << endl;
}

Vector operator*(double a, Vector v) {
	return Vector(a * v.x, a * v.y);
}

class Vector3d :private Vector {
private:
	double z;
public:
	Vector3d(double xx = 1, double yy = 1, double zz = 1) :Vector(xx, yy) {
		z = zz;
	}
	void show() {
		//return x;
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
		cout << "z = " << z << endl;
	}
	double len() {
		double l = Vector::len();
		return sqrt(l * l + z * z);
	}
	Vector3d operator+(Vector3d v3d) {
		return Vector3d(x + v3d.x, y + v3d.y, z + v3d.z);
	}
	Vector3d operator-(Vector3d v3d) {
		return Vector3d(x - v3d.x, y - v3d.y, z - v3d.z);
	}
	Vector3d operator*(double a) {
		return Vector3d(a * x, a * y, a * z);
	}
	void operator+=(Vector3d v3d) {
		x += v3d.x;
		y += v3d.y;
		z += v3d.z;
	}
	void operator-=(Vector3d v3d) {
		x -= v3d.x;
		y -= v3d.y;
		z -= v3d.z;
	}
	void set(double xx, double yy, double zz) {
		x = xx;
		y = yy;
		z = zz;
	}
	friend void operator<<(ostream&, Vector3d);
};

void operator<<(ostream& os, Vector3d v3d) {
	os << "x = " << v3d.x << endl;
	os << "y = " << v3d.y << endl;
	os << "z = " << v3d.z << endl;
}

int main() {
	Vector v(1, 2);
	Vector3d v1(2, 2, 2);
	Vector3d v3 = v1*2;
	v3.show();

	const int n_exp = 3000;
	const double pi = 3.141592;
	int steps[n_exp];
	srand(time(0));
	double mean = 0.;
	for (int i = 0; i < n_exp; i++) {
		Vector3d r(0, 0, 0);
		Vector3d dr(0, 0, 0);
		int count = 0;
		while (r.len() < 40) {
			double phi = float(rand()) / float(RAND_MAX) * 2 * pi;
			double theta = float(rand()) / float(RAND_MAX) * pi;
			dr.set(sin(theta)*cos(phi), sin(theta)*sin(phi), cos(theta));
			r+=dr;
			dr.set(0, 0, 0);
			count = count + 1;
		}
		steps[i] = count;
		mean = mean + count;
		cout << count << endl;
	}
	mean = mean / n_exp;
	double s2 = 0.;
	for (int i = 0; i < n_exp; i++) {
		s2 = s2 + pow((steps[i] - mean), 2);
	}
	double s = sqrt(s2 / n_exp);
	cout << "mean: " << mean << " s: " << s << endl;
	return 1;
}
