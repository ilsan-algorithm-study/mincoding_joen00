#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int N;
vector<int> arr;
int cnt;

int get_math(int a, int b, int c) {

	int sum = 0;
	if (c == 0) {
		sum = (a - b) * (a + b);
	}
	else if (c == 1) {
		if (a > b) {
			sum = a;
		}
		else {
			sum = b;
		}
	}
	else if (c == 2) {
		sum = (a * a) - (b * b);
	}
	else if (c == 3) {
		sum = (a + b) * (a + b);
	}
	return sum;
}


void dfs(int level, int sum) {

	if (level == N - 1) {
		if (sum == 100) {
			cnt++;
		}
		return;
	}
	if (level > N - 1)return;

	for (int i = 0; i < 4; i++) {
		if (level == 0) {
			dfs(level + 1, get_math(arr[level], arr[level + 1], i));
		}
		else {
			dfs(level + 1, get_math(sum, arr[level + 1], i));
		}	
	}

	
}

int main() {

	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}

	dfs(0, 0);
	cout << cnt;

	return 0;

}