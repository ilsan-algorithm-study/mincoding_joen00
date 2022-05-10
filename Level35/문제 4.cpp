#include <iostream>
#include <string>
using namespace std;

char name[7] = { "TRBMDC" };
char path[10];
int a, b;
int cnt;
int used[10];

void abc(int level) {

	if (level == 6) {
		for (int i = 0; i < 6; i++) {
			if (path[i] == 'D' && i == a - 1)return;
			if (path[i] == 'D' && i == b - 1)return;
		}
		cnt++;
		return;
	}

	for (int i = 0; i < 6; i++) {
		if (used[i] == 0) {
			used[i] = 1;
			path[level] = name[i];
			abc(level + 1);
			path[level] = 0;
			used[i] = 0;
		}
	}

}

int main() {
	cin >> a >> b;
	abc(0);
	cout << cnt;
	return 0;
}
