#include <iostream>
#include <math.h>

using namespace std;

class Vector {
private:
	double x, y;
public:
	Vector(double xx=1, double yy=1) {
		x = xx;
		y = yy;
	}
	Vector(const Vector& v) {
		x = v.x;
		y = v.y;
	}
	void operator=(const Vector& v) {
		x = v.x;
		y = v.y;
	}
	void show() {
		cout << "x = " << x << "; y = " << y;
	}
};

class NamedVector : public Vector {
private:
	char *cp;
public:
	NamedVector(double x=1, double y=1, const char* name="noname") :Vector(x, y) {
		int len = strlen(name) + 1;
		cp = new char[len];
		strncpy(cp, name, len);
	}
	NamedVector(NamedVector& nv) :Vector(nv) {
		//Vector::Vector(nv);
		int len = strlen(nv.cp) + 1;
		cp = new char[len];
		strncpy(cp, nv.cp, len);
	}
	void operator=(const NamedVector& v){
		delete[] cp;
		int len = strlen(v.cp) + 1;
		cp = new char[len];
		strncpy(cp, v.cp, len);
		Vector::operator=(v);
	}
	int operator[](int i){
		//const char *g[1];
		if ((i < strlen(cp)) and (i >= 0)) return 7*i;
		else return 0;
	}
	void show() {
		Vector::show();
		cout << "; name: " << cp << endl;
	}
	~NamedVector() {
		delete[] cp;
	}
};

//char operator[](int i) {
//	return '!';
//}

int main() {
	Vector v;
	//v.show();
	//cout << endl; 
	/*NamedVector nv1(2, 3, "nv1");
	nv1.show();
	NamedVector nvv = nv1;
	nvv.show();*/
	NamedVector nv(1, 1, "nvvv");
	//nv = nv1;
	//nv.show();
	cout << nv[3];
	//cout << aaa('a');
	//Vector v2 = v;
	//v2.show();
	return 0;
}