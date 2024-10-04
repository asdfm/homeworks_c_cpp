#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>

double a(double x) {
	double g = 9.81;
	double R = 6400000;
	return (-1) * g / pow((1 + x / R), 2);
};

double g_const(double h0, double h) {
	double g = 9.81;
	return sqrt(2 * (h0 - h) / g);
};

double g_var(double H, double h) {
	double g0 = 9.81;
	double e = 1 / 6400000.;
	return sqrt((1 + e * H) / (2 * g0)) * (sqrt((1 + e * h)*(H - h)) + ((1 + e * H) / sqrt(e)) * (atan(sqrt(e * (H - h) / (1 + e * h)))));
};

void main() {
	double H = 300000, h = 100000, g = 9.81, dt = 0.0001;
	int i;
	double v = 0, t = 0;
	double v1 = 0, t1 = 0;
	double x, x1;
	x = H;
	x1 = H;
	while (x > h) {
		x = x + v * dt;
		v = v - g * dt;
		t = t + dt;
	}

	while (x1 > h) {
		x1 = x1 + v1 * dt;
		v1 = v1 + a(x1) * dt;
		t1 = t1 + dt;
	}

	printf("%lf \n", t);
	//printf("%lf, \n", x);
	printf("%lf \n", t1);
	//printf("%lf, \n", x1);
	printf("%lf, \n", g_const(H, h));
	printf("%lf, \n", g_var(H, h));

	printf("%lf", (t - t1)/t * 100);
}