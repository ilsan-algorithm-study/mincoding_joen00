#include <iostream>
#include <unordered_map>
using namespace std;

string vect;


void binary_search(int start, int end) {
    int mid = (start + end) / 2;
    if (start > end) {
        cout << "X";
        return;
    }
    if ((vect[mid] == '#' && vect[mid + 1]=='_') || mid == 9) {
        cout << (mid + 1) * 10 << "%";
        return;
    }
    if (vect[mid] == '#' && vect[mid + 1] == '#') {
        binary_search(mid + 1, end);
    }
    else {
        binary_search(start, mid - 1);
    }
}

int main() {

    cin >> vect;
    binary_search(0, 9);

    return 0;
}


