#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

struct node {
	int a;
	int b;
};

bool compare(node x, node y) {
	if (x.b < y.b)return 0;
	if (x.b > y.b)return 1;
	return x.a < y.a;
}

int main() {
	int arr[10][10];
	int bit;
	int n;
	unordered_map<int, int> map;
	node num[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> bit;
			if (bit == 1) {
				map[arr[i][j]]++;
			}
		}
	}

	int k = 0;
	auto iter = map.begin();
	while (iter != map.end()) {
		num[k].a = iter->first;
		num[k].b = iter->second;
		k++;
		++iter;
	}

	sort(num, num + k, compare);
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < num[i].b; j++) {
			cout << num[i].a << " ";
		}
	}

	return 0;
}