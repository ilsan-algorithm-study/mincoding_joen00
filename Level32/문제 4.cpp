#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

vector<string> arr;

void change(int a) {
	vector<int> num;

	for (int i = 0; i < arr[a].length(); i++) {
		int t = arr[a][i] - '0';
		num.push_back(t);
	}
	sort(num.begin(), num.end());
	for (int i = 0; i < num.size(); i++) {
		arr[a][i] = num[i] + '0';
	}

}


int main() {

	for (int i = 0; i < 5; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
	int a, b;
	cin >> a >> b;

	change(a);
	change(b);
	for (int i = 0; i < 5; i++) {
		cout << arr[i][0] << " ";
	}

	return 0;
}