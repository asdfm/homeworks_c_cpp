#include <iostream>
#include <Windows.h>
using namespace std;

void main() {
	int i;
	cin >> i;
	cin.get();
	int n = i + 1;
	char *str = new char[n];
	cin.getline(str, n);
	int len = strlen(str);
	float d;
	cin >> d;
	cout << d;
	char s;
	//cout << str[len-1];
	//str[1] = 'r';
	//cout << str;
	for (int k = 0; k < len/2; k++) {
		s = str[k];
		str[k] = str[len-1 - k];
		str[len-1 - k] = s;
		//cout << str << '\n';
	}
	cout << str << endl;
	//cout << len;

	delete[] str;
}