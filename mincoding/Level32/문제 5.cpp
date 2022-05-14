#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

bool compare(string a, string b) {
	if (a.length() > b.length())return 0;
	if (a.length() < b.length())return 1;
	return a < b;
}

int main() {
	vector<string> arr;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
	sort(arr.begin(), arr.end(), compare);
	for (int i = 0; i < num; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}