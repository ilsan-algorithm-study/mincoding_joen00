#include <iostream>
using namespace std;

char path[4];
char arr[3];
int used[3];


void dfs(int level) {

	if (level == 3) {
		cout << path[0]<<path[1]<<path[2] << endl;
		return;
	}
	for (int i = 0; i < 3; i++) {
		if (used[i] == 0) {
			used[i] = 1;
			path[level] = arr[i];
			dfs(level + 1);
			used[i] = 0;
		}
	}
}

int main() {

	cin >> arr[0] >> arr[1] >> arr[2];
	dfs(0);


	return 0;
}