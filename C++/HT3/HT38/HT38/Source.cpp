#include <iostream>
#include <math.h>

using namespace std;

class Vector {
private:
	double x, y;
	static int n_elem;
public:
	Vector(double xx = 0, double yy = 0) {
		n_elem = n_elem + 1;
		x = xx;
		y = yy;
	}
	static void show_n_vec() {
		cout << n_elem;
	}
};

int Vector::n_elem = 0;
int main() {
	Vector v(1, 2);
	Vector v1;
	Vector::show_n_vec();
}