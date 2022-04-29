#include <iostream>
#include <string>
using namespace std;

string str;
char path[10];

void run(int level, int start)
{
	if (level == 3) {
		cout << path << endl;
		return;
	}

	for (int i = start; i < str.length(); i++) {
		path[level] = str[i];
		run(level + 1, i);
		path[level] = 0;
	}
}

int main()
{
	cin >> str;
	run(0, 0);

	return 0;
}