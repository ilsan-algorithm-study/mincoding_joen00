#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> arr;

	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			string s = arr[i];
			s = s + arr[j];
			if (s == "HITSMUSIC") {
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}