#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct node {
	int a;
	char b;
};

int main() {
	int n;
	cin >> n;
	node arr[101];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].a >> arr[i].b;
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((arr[i].a > arr[j].a) || (arr[i].a == arr[j].a && arr[i].b > arr[j].b)) {
				swap(arr[i], arr[j]);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i].a << " " << arr[i].b << endl;
	}

	return 0;
}