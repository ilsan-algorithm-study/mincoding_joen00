#include <iostream>
#include <string>
using namespace std;

int arr[5];
int used[6];
int path[6];

int MAX = -21e8;
int MIN = 21e8;

void dfs(int level) {

	if (level == 5) {
		int a = path[0] * path[1] - path[2] * path[3] + path[4];
		if (a > MAX) {
			MAX = a;
		}
		if(a < MIN){
			MIN = a;
		}
		return;
	}

	for (int i = 0; i < 5; i++) {
		if (used[i] == 0) {
			used[i] = 1;
			path[level] = arr[i];
			dfs(level + 1);
			used[i] = 0;
		}
	}

}

int main() {

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	dfs(0);
	cout << MAX << endl;
	cout << MIN;


	return 0;
}
