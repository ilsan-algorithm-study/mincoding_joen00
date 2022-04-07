#include <iostream>
#include <vector>
using namespace std;

int main() {
	string arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		char t = arr[i][1];
		arr[i][1] = arr[i][3];
		arr[i][3] = t;
	}
	for (int i = 0; i < 5; i++) {
		if (arr[i] == "MAPOM") {
			cout << "yes";
			return 0;
		}
	}
	cout << "no";
	return 0;
}