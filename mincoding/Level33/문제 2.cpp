#include <iostream>
using namespace std;

int arr[200];

char findboss(char member) {

    if (arr[member] == 0)return member;
    char ret = findboss(arr[member]);
    return ret;

}

void setUnion(char a, char b) {

    if (findboss(a) == findboss(b))return;
    arr[findboss(b)] = findboss(a);

}

int main() {

    setUnion('A', 'B');
    setUnion('A', 'C');
    setUnion('E', 'D');
    setUnion('E', 'F');
    setUnion('H', 'G');
    setUnion('I', 'J');

    int n;
    cin >> n;
    int cnt = 4;

    for (int i = 0; i < n; i++) {
        char a, b;
        cin >> a >> b;
        if (findboss(a) != findboss(b)) {
            setUnion(a, b);
            cnt--;
        }
    }
    cout << cnt << "°³";
    return 0;
}
