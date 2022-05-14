#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main() {
	vector<string> v;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		string s;
		cin >> s;
		int up = 0;
		int low = 0;
		int flag = 0;
		for (int i = 1; i < s.length(); i++) {
			if (s[0] >= 'A' && s[0] <= 'Z') {
				flag++;
			}
			if (s[i] >= 'a' && s[i] <= 'z') {
				low++;
			}
			else if (s[i] >= 'A' && s[i] <= 'Z') {
				up++;
			}
		}
		if ((low > 0 && up == 0) ||(flag==1 && low>0 && up ==1)) {
			for (int i = 0; i < s.length(); i++) {
				s[i] = tolower(s[i]);
			}
			s[0] = toupper(s[0]);
		}
		else {
			for (int i = 0; i < s.length(); i++) {
				s[i] = toupper(s[i]);
			}
		}
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < num; i++) {
		cout << v[i] << endl;
	}

	return 0;
}