#include <iostream>
#include <vector>
using namespace std;

int main() {
	int arr[9] = { 1,2,3,3,5,1,0,1,3 };
	int n;
	cin >> n;
	int MIN = 0;
	for (int i = 0; i < n; i++) {
		MIN = MIN + arr[i];
	}
	int sum = MIN;
	for (int i = 0; i < 9 - n; i++) {
		sum = sum - arr[i] + arr[i + n];
		if (MIN > sum) {
			MIN = sum;
		}
	}
	cout << MIN;

	return 0;
}