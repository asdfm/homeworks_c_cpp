#include <iostream>
#include <complex>

using namespace std;

template <typename T>
void Swap2(T& i, T& j)
{
	T tmp;
	tmp = i;
	i = j;
	j = tmp;
}

template <typename T>
void Show(T i, T j){
	cout << i << ' ' << j << endl; 
}

template <typename T>
void Swap2(T* a, T* b, int n) {
	T tmp;
	for (int i = 0; i < n; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
}

template <typename T>
void Show(T *a, T *b, const int n) {
	for (int i = 0; i < n; i++) {
		cout << i << " - " << a[i] << "; ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << i << " - " << b[i] << "; ";
	}
	cout << endl;
}

complex<double> conj(complex<double> a) {
	complex<double> b(a.real(), -a.imag());
	return b;
}

int main() {
	srand(time(0));


	struct Root{ int h; int t; };
	Root r1, r2;
	r1.h = 1;
	r1.t = 2;
	r2.h = 10;
	r2.t = 20;

	int a = 1;
	int b = 2;

	const int l = 3;
	int arr1[] = { 1, 2, 3 };
	int arr2[] = { 0, 0, 0 };
	Swap2(arr1, arr2, 3);
	Show(arr1, arr2, 3);
	//cout << arr1[0] << endl;
	Swap2(r1, r2);
	cout << r1.h << " " << r1.t << endl;
	cout << r2.h << " " << r2.t << endl;

	const int m = 5;
	complex<int> carr[m];

	complex<int> c_conjarr[m];

	for (int k = 0; k < 5; k++) {
		carr[k] = complex<int>(double(rand()), double(rand()));
		c_conjarr[k] = complex<int>(carr[k].real(), -carr[k].imag());
	}
	Show(carr, c_conjarr, m);

	complex<int> c(1, 1);
	return 0;
}