#include <iostream>
#include <clocale>
#include<deque>
#include<iterator>
#include<algorithm>

using namespace std;

int main() {
	srand(time(0));
	setlocale(LC_CTYPE, "rus");
	cout << " 1. Вставить элемент в конец\n 2. Вставить элемент в начало\n 3. Удалить элемент в конце\n 4. Удалить элемент в начале\n 5. Вывести первый элемент\n 6. Вывести последний элемент\n 7. Количество элементов(размер)\n 8. Вывести все элементы\n 9. Выход" << endl;
	
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