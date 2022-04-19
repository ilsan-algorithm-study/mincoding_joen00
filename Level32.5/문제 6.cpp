#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

int arr[10][10];
int brr[10][10];

void change(int start, int end, int a) {


	for (int i = start; i <= end; i++) {
		arr[i][end] = brr[start][i];
	}
	int end1 = end;
	for (int i = start; i <= end; i++) {
		arr[start][i] = brr[end1--][start];
	}
	for (int i = end; i >= start; i--) {
		arr[i][start] = brr[end][i];
	}
	end1 = end;
	for (int i = start; i <= end; i++) {
		arr[end][end1--] = brr[i][end];
	}
}

int main() {
	
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> arr[i][j];
			brr[i][j] = arr[i][j];
		}
	}
	
	for (int i = 0; i < b%4; i++) {
		int start = 0;
		int end = a - 1;
		while (start < end) {
			change(start, end, a);
			start++;
			end--;
		}
		for (int k = 0; k < a; k++) {
			for (int j = 0; j < a; j++) {
				brr[k][j] = arr[k][j];
			}
		}
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}