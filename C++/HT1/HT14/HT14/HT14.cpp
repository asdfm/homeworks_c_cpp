#include <iostream>
using namespace std;

void print(int i = 1, const char* str = "hi") {
	for (int k = 0; k < i; k++) {
		cout << str << '\n';
	}
}

void print(const char* str) {
		cout << str << '\n';
}

void main() {
	print("dd");
}