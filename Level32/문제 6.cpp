#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

struct node {
	int a;
	vector<string> s;
};

node arr[100];

int main() {
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < b; i++) {
		int num;
		string name;
		cin >> num >> name;
		arr[num].s.push_back(name);
		arr[num].a++;
	}
	int MAX = 0;
	int index = 0;
	for (int i = 0; i < a; i++) {
		if (arr[i].a > MAX) {
			MAX = arr[i].a;
			index = i;
		}
	}
	for (int i = 0; i < MAX; i++) {
		cout << arr[index].s[i] << endl;
	}

	return 0;
}