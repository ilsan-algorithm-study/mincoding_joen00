#include <iostream>
#include <unordered_map>
using namespace std;



int main() {

    int n;
    cin >> n;
    int start = 0;
    int end = n;
    while (1) {
        int mid = (start + end) / 2;
        if ((mid * mid <= n) && (((mid + 1) * (mid + 1) > n))) {
            cout << mid;
            return 0;
        }
        if (mid * mid < n) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    return 0;
}