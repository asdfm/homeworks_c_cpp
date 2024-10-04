#include <iostream>
#include <clocale>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

void disp_list(list<int> g)
{
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main() {
	srand(time(0));
	setlocale(LC_CTYPE, "rus");
	cout << " 1. �������� ������� � �����\n \
2. �������� ������� � ������\n \
3. ������� ������� � �����\n \
4. ������� ������� � ������\n \
5. ������� ������ �������\n \
6. ������� ��������� �������\n \
7. ���������� ���������(������)\n \
8. ������� ��� ��������\n \
9. �����\n \
10. ������� �������� � ������������ ���������� (�������� �������� � ����������� ����������).\n \
11. ������������ ������ � �������� �����������\n \
12. ���������� ������\n \
13. ������� ����� �������� ��� �������� �� ������" << endl;

	list<int> ls;
	for (int i = 0; i < 2; i++) {
		ls.push_back(1);
		ls.push_back(2);
	}
	ls.push_back(4);

	int opt;
	for (;;) {
		cin >> opt;
		cin.get();
		if (opt == 1) {
			int num;
			cin >> num;
			ls.push_back(num);
		}
		if (opt == 2) {
			int num;
			cin >> num;
			ls.push_front(num);
		}
		if (opt == 3) {
			ls.pop_back();
		}
		if (opt == 4) {
			ls.pop_front();
		}
		if (opt == 5) {
			cout << ls.front() << endl;
		}
		if (opt == 6) {
			cout << ls.back() << endl;
		}
		if (opt == 7) {
			cout << ls.size() << endl;
		}
		if (opt == 8) {
			list<int>::iterator it;
			for (it = ls.begin(); it != ls.end(); ++it)
				cout << '\t' << *it;
			cout << endl;
		}
		if (opt == 9) {
			break;
		}
		if (opt == 10) {
			list<int> ls_bak = ls;
			ls_bak.sort();
			list<int>::iterator it, it_next;
			for (it = ls_bak.begin(); it != ls_bak.end(); it++) {
				it_next = it;
				it_next++;
				if (it_next == ls_bak.end()) {
					break;
				}
				if (*it_next == *it) {
					ls.remove(*it);
				}
				else {
					continue;
				}
			}
		}
		if (opt == 11) {
			ls.reverse();
		}
		if (opt == 12) {
			ls.sort();
		}
		if (opt == 13) {
			int eridx;
			list<int>::iterator it = ls.begin();
			cin >> eridx;
			cin.get();
			advance(it, eridx);
			ls.erase(it);
		}
	}
	return 0;
}