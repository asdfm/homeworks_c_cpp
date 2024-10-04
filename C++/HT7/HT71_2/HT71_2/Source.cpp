#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	srand(time(0));
	int n_elem;
	cin >> n_elem;
	cin.get();
	vector<int> arr(n_elem);
	cout << "arr:" << endl;
	for (int i = 0; i < n_elem; i++) {
		arr[i] = rand();
		cout << arr[i] << endl;
	}

	int val, i_val;
	cin >> val;
	cin.get();
	cin >> i_val;
	cin.get();
	arr[i_val] = val;
	
	cout << "arr:" << endl;
	for (int i = 0; i < n_elem; i++) {
		cout << arr[i] << endl;
	}

	cout << "arr:" << endl;
	sort(arr.begin(), arr.end());

	for (int i = 0; i < n_elem; i++) {
		cout << arr[i] << endl;
	}

	return 1;
}