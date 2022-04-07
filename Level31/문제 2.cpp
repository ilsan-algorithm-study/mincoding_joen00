#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> arr;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	int MIN = arr[0] + arr[1] + arr[2] + arr[3];
	for (int i = 0; i < n - 4; i++) {
		int sum = MIN - arr[i] + arr[i + 4];
		if (MIN > sum) {
			MIN = sum;
		}
	}
	cout << MIN;

	return 0;
}