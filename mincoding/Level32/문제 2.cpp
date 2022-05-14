#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int arr[4] = { 0,0,0,0 };

int main() {
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		int j = 3;
		while ((j >= 0) && (arr[j] < a)) {
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = a;
	}
	cout << "±Ý" << arr[0] << endl;
	cout << "Àº" << arr[1] << endl;
	cout << "µ¿" << arr[2] << endl;

	return 0;
}