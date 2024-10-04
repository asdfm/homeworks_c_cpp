#include <iostream>
#include <Windows.h>
#include <fstream>
using namespace std;



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int num;
	char arr[250];
	cin >> num;
	cin.get();
	cin.getline(arr, 250);
	cout << num << '\n' << arr << endl;

	double b;
	cin >> b;
	ofstream fout("a.txt");
	fout << b;
	fout.close();
	cout << b;
}