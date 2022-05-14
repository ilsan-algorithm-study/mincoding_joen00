#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

string arr[3][3];

void change(int a) {
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int len = arr[i][j].length();
			if (len != 0) {
				int vet = arr[i][j][len - 1] - '0';
				if (vet <= a) {
					arr[i][j].erase(len - 1, 1);
				}
				else {
					arr[i][j][len - 1] = arr[i][j][len - 1] - a ;
				}
			}
		}
	}
}


int main() {
	
	int num;
	int wind;
	cin >> num;

	for (int i = 0; i < num; i++) {
		int a, b;
		string s;
		cin >> a >> b >> s;
		arr[a][b] = s;
	}
	cin >> wind;

	for (int i = 0; i < wind; i++) {
		int a;
		cin >> a;
		change(a);
	}
	int sum = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int len = arr[i][j].length();
			if (len != 0) {
				sum = sum + len;
			}
		}
	}

	cout << sum;

	return 0;
}