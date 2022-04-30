#include<iostream>
using namespace std;


int map[3][8];
int cnt;

void dfs(int now, int level)
{

	if (level == 7) {
		cnt++;
		return;
	}
	for (int x = 0; x < 3; x++)
	{
		int direct[3] = { -1,0,1 };
		int dy = level;
		int dx = now + direct[x];
		if (dx < 0 || dx > 2)continue;
		dfs(dx, level + 1);
	}

}
int main()
{
	char a;
	cin >> a;
	if (a == 'A') {
		dfs(0, 0);
		cout << cnt;
	}
	else if (a == 'B') {
		dfs(1, 0);
		cout << cnt;
	}
	else if (a == 'C') {
		dfs(2, 0);
		cout << cnt;
	}

	return 0;
}
