#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.size() < b.size())return 1;
	if (a.size() > b.size())return 0;
	return a < b;
}

int main() {
	vector<string> arr;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
	sort(arr.begin(), arr.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}