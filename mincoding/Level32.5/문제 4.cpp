#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;



int main() {

	int n, num;
	string s;

	int start = 1;
	int end = 50;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num >> s;
		if (s == "DOWN") {
			end = num - 1;
		}
		else if (s == "UP") {
			start = num + 1;
		}
		if (start > end) {
			cout << "ERROR";
			return 0;
		}
		else if (start == end) {
			cout << start;
			return 0;
		}
	}
	cout << start << " ~ " << end;
	
	return 0;
}