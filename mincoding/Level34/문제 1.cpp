#include <iostream>
#include <unordered_map>
using namespace std;

int vect[10] = {4,4,5,7,8,10,20,22,23,24};
int target;

void binary_search(int start, int end) {
    int mid = (start + end) / 2;
    if (start > end) {
        cout << "X";
        return;
    }
    if (vect[mid] == target) {
        cout << "O";
        return;
    }
    if (vect[mid] < target) {
        binary_search(mid + 1, end);
    }
    else {
        binary_search(start, mid - 1);
    }
}

int main() {

    cin >> target;
    binary_search(0, 9);

    return 0;
}


