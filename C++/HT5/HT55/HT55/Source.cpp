#include <iostream>
#include <fstream>
using namespace std;

int main() {
	//int len = 2000;
	double b;
	cin >> b;
	double d = 2. * b;
	//	ofstream fout("b.dat");
	//	fout << d << endl;
	//	fout << b << endl;
	//	fout.close();
	//
	//
	//	char* c = new char[len];
	//	ifstream fin("b.dat");
	//	ofstream fout1("a.dat", ios::out | ios::binary);
	//	while (fin.eof() == 0) {
	//		fin.getline(c, len, '\n');
	//		cout << c << endl;
	//		fout1.write(c, sizeof c);
	//	}
	//}
	double dblarr[2] = { b, d };
	ofstream fout("a.dat", ios::out | ios::binary);
	fout.write((char*)&b, sizeof b);
	fout.write((char*)&d, sizeof d);
	fout.close();

	ifstream fin("a.dat", ios::in | ios::binary);
	double s = 0;
	while (fin.eof() == 0) {
		fin.read((char*)&s, sizeof s);
		cout << s << endl;
	}
	//fin.read((char*)&dblarr, sizeof dblarr);

	//// see how many bytes have been read
	//cout << fin.gcount() << " bytes read\n";

	//for (i = 0; i < 2; i++) // show values read from file
	//	cout << dblarr[i] << " ";

	fin.close();
	}