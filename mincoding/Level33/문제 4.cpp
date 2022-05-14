#include <iostream>
using namespace std;

int arr[200];

int findboss(int member) {

    if (arr[member] == 0)return member;
    int ret = findboss(arr[member]);
    arr[member] = ret;
    return ret;

}

void setUnion(int a, int b) {

    if (findboss(a) == findboss(b))return;
    arr[findboss(b)] = findboss(a);

}

int find_char(char a) {
    if (a >= '0' && a <= '9') {
        return 0;
    }
    return 1;
}


int main() {

    int n, k;
    cin >> n >> k;
    char crr[20][2];
    for (int i = 0; i < n; i++) {
        cin >> crr[i][0] >> crr[i][1];
        if (find_char(crr[i][1])) {
            swap(crr[i][0], crr[i][1]);
        }
    }


    for (int i = 0; i < n; i++) {
        if (findboss(crr[i][0]) != findboss(crr[i][1])) {
            setUnion(crr[i][0], crr[i][1]);
        }
    }
    for (int i = 'A'; i < 'Z'; i++) {
        if (arr[i] > 0) {
            arr[int(arr[i])] = i;
            arr[i] = 0;
        }
    }

    for (int i = 49; i < 49 + k; i++) {
        if (arr[i] >= 65) {
            cout << char(arr[i]);
        }
        else {
            cout << char(findboss(arr[i]));
        }
    }

    return 0;
}
