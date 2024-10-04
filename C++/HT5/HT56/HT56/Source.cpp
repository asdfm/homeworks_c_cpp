#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream fin("a.dat", ios::in | ios::binary);
	double s = 0;
	while (fin.eof() == 0) {
		fin.read((char*)&s, sizeof s);
		cout << s << endl;
		s = 0;
	}
	//fin.read((char*)&dblarr, sizeof dblarr);

	//// see how many bytes have been read
	//cout << fin.gcount() << " bytes read\n";

	//for (i = 0; i < 2; i++) // show values read from file
	//	cout << dblarr[i] << " ";

	fin.close();
}