#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

int main() {
	string arr[6] = { "ABCD","ABCE","AGEH","EIEI","FEQE","ABAD" };
	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < 6; i++) {
		int flag1 = 0;
		int flag2 = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] != '?') {
				if (arr[i][j] == s[j]) {
					flag1++;
				}
				flag2++;
			}
		}
		if (flag1 > 0 && flag1==flag2) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}