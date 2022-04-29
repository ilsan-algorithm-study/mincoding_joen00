#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string arr[5] = { "BTS","SBS","BS","CBS","SES" };
string str;
string path;
int MIN = 99;

void dfs(int level, string path) {

	if (path == str) {
		if (MIN > level) {
			MIN = level;
		}
		return;
	}
	if (level > 6)return;
	for (int i = 0; i < 5; i++) {
		dfs(level + 1, path + arr[i]);
	}

}

int main() {

	cin >> str;

	dfs(0, "");

	cout << MIN;


	return 0;
}