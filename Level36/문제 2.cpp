#include <vector>
#include <string>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int MAX = 0;
int check[100][8];

int get_score(string s) {

	int score = 0;
	for (int i = 1; i < s.length(); i++) {
		if (s[i - 1] == s[i]) {
			score = score - 50;
		}
		if (abs(s[i - 1] - s[i]) <= 5) {
			score = score + 3;
		}
		if (abs(s[i - 1] - s[i]) >= 20) {
			score = score + 10;
		}
	}
	return score;

}

int get_check(int N, string s) {

	int a = 0;
	int flag = 0;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			flag = 0;
			for (int k = 0; k < s.size(); k++) {
				if (check[i][k] == check[j][k]) {
					flag++;
				}
			}
			if (flag == s.size()) {
				a++;
				return 0;
			}
		}
	}
	return 1;

}

//&& get_check(N, s)

void dfs(int level, int N, string s) {

	if (level == N) {
		int sum = get_score(s);
		if (sum > MAX) {
			MAX = sum;
		}
		return;
	}
	if (level > N) return;

	for (int i = 0; i < s.length(); i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if ((check[level][i] != 1 && check[level][j] != 1) && i != j) {
				check[level][i] = 1;
				check[level][j] = 1;
				swap(s[i], s[j]);
				dfs(level + 1, N, s);
				swap(s[i], s[j]);
				check[level][i] = 0;
				check[level][j] = 0;
			}
		}
	}
	
	
}


int main() {

	string s;
	int N;
	cin >> s >> N;

	dfs(0, N, s);
	cout << MAX;
	return 0;

}