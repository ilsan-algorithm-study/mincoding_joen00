#include <vector>
#include <string>
#include <iostream>
using namespace std;


vector<int> arr;

int N;
int MAX;

void make_mul() {

	for (int i = 0; i < 6; i++) {
		arr[i] = arr[i] * 2;
	}
	return;
}


void dfs(int level, int sum) {

	if (level == N) {
		if (MAX < sum) {

			MAX = sum;
		}
		return;
	}
	if (level > N)return;
	if (level > 0) {
		make_mul();
	}
	vector<int> brr;
	brr = arr;
	for (int i = 0; i <= 2; i++) {
		for (int j = 3; j <= 5; j++) {
			for (int k = 1; k <= 4; k++) {
				int a = arr[i];
				arr[i] = 0;
				a = a + arr[j];
				arr[j] = 0;
				a = a + arr[k];
				arr[k] = 0;
				dfs(level + 1, sum + a);
				arr = brr;
			}
		}
	}

	
}

int main() {

	for (int i = 0; i < 6; i++) {
		int a;
		cin >> a;
		arr.push_back(a);
	}
	cin >> N;

	dfs(0, 0);
	cout << MAX;
	

	return 0;

}