#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map <char, int> map;
int arr[200];

char findboss(char member) {

    if (arr[member] == 0) return member;
    char ret = findboss(arr[member]);
    return ret;

}

void setUnion(char a, char b) {

    if (findboss(a) == findboss(b))return;
    arr[findboss(b)] = findboss(a);
}

int main() {

    int n;
    int cnt;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        map['A' + i] = a;
    }
    int m;
    cin >> m;
    cnt = n;

    for (int i = 0; i < m; i++) {
        string s;
        char a, b;
        cin >> s >> a >> b;
        int sum = 0;
        if (s == "alliance") {
            if (findboss(a) != findboss(b)) {
                sum = map[findboss(a)] + map[findboss(b)];
                map[findboss(a)] = sum;
                setUnion(a, b);
            }
        }
        else if (s == "war") {
            if (map[findboss(a)] > map[findboss(b)]) {
                for (int i = 0; i < n; i++) {
                    if (findboss(i + 'A') == findboss(b)) {
                        cnt--;
                    }
                }
            }
            if (map[findboss(a)] < map[findboss(b)]) {
                for (int i = 0; i < n; i++) {
                    if (findboss(i + 'A') == findboss(a)) {
                        cnt--;
                    }
                }
            }
        }
    }
    cout << cnt;



    return 0;
}
