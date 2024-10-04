#include <iostream>
#include <Windows.h>
using namespace std;

struct rec_ 
{ 
	int i;
	char cp[80];
};

void main() {
	int n;
	cin >> n;
	cin.get();
	rec_* arr = new rec_[n];
	for (int k = 0; k < n; k++) {
		cin.getline(arr[k].cp, 80);
		//cin.get();
		//cin >> arr[k].i;
	}
	for (int k = 0; k < n; k++) {
		cout << arr[n-1-k].cp << '\n';
	}

	delete[] arr;
	//cout << arr;
}