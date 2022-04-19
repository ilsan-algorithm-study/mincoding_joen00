#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

struct node {
	int n;
	string s;
};

int ans[100];
int cnt;

node arr[7] = {
		3,">>",2,">>",1,"<<",3,">>",2,"<<",0,"!!",1,"<<"
};

void dfs(int level) {
	
	if (arr[level].n == 0) {
		return;
	}
	else if (arr[level].s == ">>") {
		ans[cnt] = level;
		cnt++;
		dfs(level + arr[level].n);
	}
	else if (arr[level].s == "<<") {
		ans[cnt] = level;
		cnt++;
		dfs(level - arr[level].n);
	}

}

int main() {
	
	int n;
	cin >> n;

	dfs(n);
	for (int i = cnt - 1; i >= 0; i--) {
		cout << ans[i] << "¹ø" << endl;
	}
	
	return 0;
}