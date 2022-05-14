#include <iostream>
using namespace std;

int n;
int cnt;

void dfs(int level, int sum) {

	if (level == n && sum == 7) {
		cnt++;
		return;
	}
	if (level >= n) return;
	if (sum > 7) return;
	for (int i = 0; i <= 9; i++) {
		dfs(level + 1, sum + i);
	}
}

int main() {
	cin >> n;
	dfs(0, 0);

	cout << cnt;
	return 0;
}