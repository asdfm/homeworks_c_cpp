#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

class MyTime {
private:
	int hrs;
	double mins;
public:
	MyTime(int h, double m) {
		if ((0 <= h < 60) and (0 <= m < 60)) {
			hrs = h;
			mins = m;
		}
	}
	MyTime(double m) {
		if (m >= 0) {
			hrs = 0;
			mins = m;
		}
	}
	MyTime() {
		hrs = 0;
		mins = 0;
	}
	void set(int h, double m) {
		if ((0 <= h < 60) and (0 <= m < 60)) {
			hrs = h;
			mins = m;
		}
	}
	void show() {
		cout << hrs << " hours; " << mins << " minutes" << endl;
	}
	void sum(MyTime t) {
		double m = mins + t.mins;
		div_t n = div(m, 60);
		if (m >= 60) {
			hrs = hrs + n.quot;
			mins = n.rem;
		}
		else{
			mins = m;
		}
		hrs = hrs + t.hrs;
	}
	friend void operator<<(ostream&, MyTime&);
};

void operator<<(ostream& os, MyTime& t) {
	os << t.hrs << ":" << t.mins << endl;
	//return os;
}

void main() {
	MyTime t(1, 20);
	t.show();
	MyTime T(2, 30);
	t.sum(T);
	t.show();
	cout << t;
}