#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct node {
	int day;
	int mon;
};

node arr[100];
int MAX = 0;
int check[100];

void dfs(int level, int sum, int N) {

	
	if (level >= N) {
		if (sum > MAX) {
			MAX = sum;
		}
		return;
	}
	for (int i = level; i < N; i++) {
		dfs(i + arr[i].day, sum + arr[i].mon, N);
	}
	
}


int main() {

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i].day >> arr[i].mon;
	}

	dfs(0, 0, N);

	cout << MAX;

}