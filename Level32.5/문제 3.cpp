#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

string arr[3] = { "ABCEFG","HIJKLM","NOPQRS" };
string brr[3] = { "ABCEFG","HIJKLM","NOPQRS" };
int direct[5][2] = {
		0,1,
		0,-1,
		1,0,
		-1,0,
		0,0,
};

void change(char c) {
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i][j] == c) {
				for (int k = 0; k < 5; k++) {
					int dx = direct[k][0] + i;
					int dy = direct[k][1] + j;
					if (dx < 0 || dy < 0 || dx>2 || dy>5)continue;
					if (arr[dx][dy] == '#') {
						arr[dx][dy] = brr[dx][dy];
					}
					else {
						arr[dx][dy] = '#';
					}
				}
				return;
			}
		}
	}

}

int main() {
	
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		change(s[i]);
	}

	for (int i = 0; i < 3; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}