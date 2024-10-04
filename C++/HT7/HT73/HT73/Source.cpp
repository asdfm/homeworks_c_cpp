#include <iostream>
#include <clocale>
#include<deque>
#include<iterator>
#include<algorithm>

using namespace std;

int main() {
	srand(time(0));
	setlocale(LC_CTYPE, "rus");
	cout << " 1. �������� ������� � �����\n 2. �������� ������� � ������\n 3. ������� ������� � �����\n 4. ������� ������� � ������\n 5. ������� ������ �������\n 6. ������� ��������� �������\n 7. ���������� ���������(������)\n 8. ������� ��� ��������\n 9. �����" << endl;
	
	deque<float> deq;
	for (int i = 0; i < 5; i++) {
		deq.push_back(rand());
	}

	int opt;
	for (;;) {
		cin >> opt;
		cin.get();
		if (opt == 1) {
			float num;
			cin >> num;
			deq.push_back(num);
		}
		if (opt == 2) {
			float num;
			cin >> num;
			deq.push_front(num);
		}
		if (opt == 3) {
			deq.pop_back();
		}
		if (opt == 4) {
			deq.pop_front();
		}
		if (opt == 5) {
			cout << deq.front() << endl;
		}
		if (opt == 6) {
			cout << deq.back() << endl;
		}
		if (opt == 7) {
			cout << deq.size() << endl;
		}
		if (opt == 8) {
			deque<float>::iterator it;
			for (it = deq.begin(); it != deq.end(); ++it)
				cout << '\t' << *it;
			cout << endl;
		}
		if (opt == 9) {
			break;
		}
	}
	return 0;
}