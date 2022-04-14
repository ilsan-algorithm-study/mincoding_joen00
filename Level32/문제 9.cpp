#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

unordered_map<char, int> map;

int main() {
	string s;
	vector<char> c;
	int n;

	cin >> s >> n;
	for (int i = 0; i < s.length(); i++) {
		c.push_back(s[i]);
	}
	sort(c.begin(), c.end(), greater<char>());
	int MAX = 0;
	char MAX_char = c[0];
	for (int i = 0; i < n; i++) {
		map[c[i]]++;
		if (map[c[i]] > MAX) {
			MAX = map[c[i]];
			MAX_char = c[i];
		}
	}
	cout << MAX_char;


	return 0;
}