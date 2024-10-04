#include <iostream>
#include <Windows.h>
using namespace std;

struct rec_
{
	int i;
	char* cp;
};

void invert(char* str) {
	int len = strlen(str);
	char s;
	//cout << str[len-1];
	//str[1] = 'r';
	//cout << str;
	for (int k = 0; k < len / 2; k++) {
		s = str[k];
		str[k] = str[len - 1 - k];
		str[len - 1 - k] = s;
		//cout << str << '\n';
	}
}

void main() {
	int n;
	cin >> n;
	rec_* arr = new rec_[n];
	for (int i = 0; i < n; i++) {
		arr[i].i = i;
		cin >> arr[i].cp;
	}
	int strn;
	cin >> strn;
	invert(arr[strn].cp);
	for (int i = 0; i < n; i++) {
		cout << arr[i].i << ' ' << arr[i].cp << endl;
		delete[] arr[i].cp;
	}

	delete[] arr;
}