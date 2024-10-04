#include <iostream>
#include <math.h>
#include <fstream>
//#include <>

using namespace std;

int main() {
	float b = 0;	
	int a;
	int len = 200;
	char* str = new char[len];
	cin.getline(str, len);
	int n_spaces=0;
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') n_spaces++;
	}
	cin >> a;
	cin >> b;
	cin.get();
	char* str1 = new char[len];
	cin.getline(str1, len);
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] == ' ') n_spaces++;
	}

	ofstream fout("file.txt");
	fout << str << endl << a << endl;
	fout << b << endl;
	fout << str1 << endl << strlen(str) + strlen(str1) - n_spaces;
	fout.close();
	delete[] str1;
	delete[] str;
}
