#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

struct node {
	char v1, v2;
	int val;
};

node n[8] = {
		{'A','B',6},
		{'A','C',4},
		{'A','D',5},
		{'C','B',1},
		{'C','D',3},
		{'C','E',7},
		{'E','B',3},
		{'E','D',1},
};

int parent[200];

int getParent(int now) {

	if (parent[now] == 0)return now;
	int ret = getParent(parent[now]);
	parent[now] = ret; //더 빠른 성능을 위해서 추가 : getParent함수에서 return 될때, 탐색되는 노드의 부모를 root로 바꿔준다.
	return ret;

}

int insert(int v1, int v2) {

	int a = getParent(v1);
	int b = getParent(v2);

	if (a == b)return 0;
	parent[b] = a;
	return 1;
}


void sort(int len) {
	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (n[i].val > n[j].val) {
				swap(n[i], n[j]);
			}
		}
	}
}

int main() {
	
	int len = 8;
	int sum = 0;
	int cnt = 0;
	sort(len);
	for (int i = 0; i < len; i++) {
		if (insert(n[i].v1, n[i].v2) == 1) {
			sum = sum + n[i].val;
			cnt++;
		}
	}
	if (cnt == 4)cout << sum;

	return 0;
}