#include <iostream>
#include <unordered_map>

using namespace std;

string str;
int a;
int used[7];
struct node {
    char a;
    int b;
};

unordered_map<char, int> map;

int MAX = 0;

void dfs(int level, int sum) {

    
    if ((str.length() - a) == level) {

        if (sum % 10 == 0) {
            if (MAX < sum) {
                MAX = sum;
            }
        }
        return;
    }

    for (int i = 0; i < str.length(); i++) {
        if (used[i] == 0) {
            used[i] = 1;
            dfs(level + 1, sum + map[str[i]]);
            used[i] = 0;
        }
    }

}

int main() {

    map['a'] = 15;
    map['b'] = 20;
    map['c'] = 44;
    map['d'] = 22;
    map['e'] = 55;
    map['f'] = 16;
    map['g'] = 45;

    cin >> str >> a;

    dfs(0, 0);
    cout << MAX;

    return 0;
}