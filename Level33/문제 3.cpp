#include <iostream>
using namespace std;

int arr[200];

int findboss(int member) {

    if (arr[member] == 0)return member;
    char ret = findboss(arr[member]);
    return ret;

}

void setUnion(int a, int b) {

    if (findboss(a) == findboss(b))return;
    arr[findboss(b)] = findboss(a);

}

int main() {

    

    int n;
    cin >> n;
    int flag = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int t;
            cin >> t;
            if (i < j) {
                if (t == 1) {
                    if (findboss(i) != findboss(j)) {
                        setUnion(i, j);
                    }
                    else {
                        flag++;
                    }
                }
            }
        }
    }

    if (flag > 0) {
        cout << "cycle 발견";
    }
    else {
        cout << "미발견";
    }
    return 0;
}
