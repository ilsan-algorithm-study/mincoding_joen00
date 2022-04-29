#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string str;
char path[5];
int cnt = 0;
int cnt1 = 0;
int used[6];
unordered_map<int, int> map;

void dfs(int level) {

	if (level == 4) {
		int a = path[3] - '0' + ((path[2] - '0') * 10) + ((path[1] - '0') * 100) + ((path[0] - '0') * 1000);
		if (map[a] != 1) {
			map[a] = 1;
			cnt++;
			if (a % 2 == 0) {
				cnt1++;
			}
		}
		return;
	}
	for (int i = 0; i < 6; i++) {
		if (used[i] == 0) {
			used[i] = 1;
			path[level] = str[i];
			dfs(level + 1);
			used[i] = 0;
		}
	}

}

int main() {

	cin >> str;

	dfs(0);

	cout << cnt << " " << cnt1 << " " << cnt - cnt1;

	return 0;
}