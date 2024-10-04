#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Vector {
private:
	double x, y;
public:
	Vector(double xx, double yy) {
		x = xx;
		y = yy;
	}
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
	void add(Vector z) {
		x = x + z.x;
		y = y + z.y;
	}
	void set(double xx, double yy) {
		x = xx;
		y = yy;
	}
};

void main() {
	const int n_exp = 3000;
	const double pi = 3.141592;
	int steps[n_exp];
	srand(time(0));
	double mean = 0.;
	for (int i = 0; i < n_exp; i++) {
		Vector r(0, 0);
		Vector dr(0, 0);
		int count = 0;
		while (r.len() < 40) {
			double phi = float(rand()) / float(RAND_MAX) * 2 * pi;
			dr.set(cos(phi), sin(phi));
			r.add(dr);
			dr.set(0, 0);
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
	double s = sqrt(s2/n_exp);
	cout << "mean: " << mean << " s: " << s << endl;
}