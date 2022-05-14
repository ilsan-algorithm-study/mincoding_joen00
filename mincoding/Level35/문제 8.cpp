#include <iostream>
using namespace std;

int arr[3] = { 10,40,60 };
int money;
int MIN = 999;

void dfs(int level, int sum) {

    if (sum < 0)return;
    if (sum == 0) {
        if (level < MIN) {
            MIN = level;
        }
        return;
    }

    for (int i = 0; i < 3; i++) {
        dfs(level + 1, sum - arr[i]);
    }

}

int main() {
    cin >> money;
    dfs(0, money);
    cout << MIN;
    return 0;
}
