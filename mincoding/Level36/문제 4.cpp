#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int N;
int MAX = 0;
int arr[6][6];

int get_sum() {

	int total_sum = 1;
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum = 0;
		for (int j = 0; j < N; j++) {
			sum = sum + arr[j][i];
		}
		total_sum = total_sum * sum;
	}
	return total_sum;
}


void dfs(int level) {

	int sum = get_sum();
	if (level > 0 && sum > MAX) {
		MAX = sum;
		return;
	}
	if (level > N)return;

	for (int j = 0; j < N; j++) {
		int t = arr[level][N - 1];
		for (int i = N - 1; i >= 1; i--) {
			arr[level][i] = arr[level][i - 1];
		}
		arr[level][0] = t;
		dfs(level + 1);
	}
}

int main() {

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}

	dfs(0);
	cout << MAX << "Á¡";

	return 0;

}