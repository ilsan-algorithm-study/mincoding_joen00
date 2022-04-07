#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void change_num(int P, int level, int N) {
	
	int i = 0;
	
	if (level == N) {
		cout << P;
		return;
	}

	P = P * 2;
	string s = to_string(P);
	while (i < s.size() / 2) {
		char t = s[i];
		s[i] = s[s.size() - i - 1];
		s[s.size() - i - 1] = t;
		i++;
	}
	change_num(stoi(s), level + 1, N);
}


int main() {
	int P, N;
	cin >> P >> N;

	change_num(P, 0, N);

	return 0;
}