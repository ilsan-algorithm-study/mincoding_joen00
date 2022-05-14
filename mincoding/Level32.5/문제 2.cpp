#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

string s;
int len;



int main() {
	
	
	cin >> s;
	len = s.length();
	string end = "";
	for (int i = 0; i < len; i++) {
		end = end + "_";
	}

	while (1) {

		if (s == end) {
			break;
		}
		cout << s << endl;
		for (int i = 0; i < len; i++) {
			if (s[i] == '_') {
				continue;
			}
			if (s[i] == 'A' || s[i] == 'a') {
				s[i] = '_';
			}
			else {
				s[i] = s[i] - 1;
			}
		}
	}
	cout << s << endl;
	return 0;
}