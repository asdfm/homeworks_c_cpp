#include <iostream>
#include<list>///////////
#include<iterator>
#include<algorithm>

using namespace std;

//void disp_list(list<int> ls) {
//	list<int>::iterator it;
//	for (it = ls.begin(); it != ls.end(); it++) {
//		cout << '\t' << *it;
//	}
//	cout << endl;
//}

void disp_list(list<int> g)
{
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main() {
	srand(time(0));
	int n_elem;
	cin >> n_elem;
	cin.get();
	list<int> arr;///////////////
	cout << "arr:" << endl;
	for (int i = 0; i < n_elem; ++i) {
		arr.push_front(rand());
	}
	disp_list(arr);

	int val, i_val;
	cin >> val;
	cin.get();
	cin >> i_val;
	cin.get();

	list<int>::iterator it = arr.begin();
	advance(it, i_val);
	arr.insert(it, val);
	arr.erase(it);

	cout << "arr:" << endl;
	disp_list(arr);

	cout << "arr:" << endl;
	arr.sort();
	disp_list(arr);

	//for (int i = 0; i < n_elem; i++) {
	//	cout << arr[i] << endl;
	//}

	return 1;
}