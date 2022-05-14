#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

vector<int> v;

void findsame() {

	int len = v.size();
	if (len == 0)return;
	if (len == 1)return;
	if (len == 2)return;

	if (v[len - 1] == v[len - 2] && v[len - 2]== v[len - 3]) {
		v.pop_back();
		v.pop_back();
		v.pop_back();
		findsame();
	}
	else {
		return;
	}

}

int main() {
	
	int n;
	cin >> n;
	int check = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		findsame();
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}