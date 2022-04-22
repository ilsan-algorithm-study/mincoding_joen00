#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


vector<string> arr;

int main() {

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }

    int x, y;
    int t = 0;
    while (1) {
        if (arr[t][n - 1] != '#') {
            y = t;
            break;
        }
        t++;
    }

    int start = 0;
    int end = 9;
    while (1) {
        int mid = (start + end) / 2;

        if (start > end) {
            break;
        }
        if ((arr[y][mid] == '#' && arr[y][mid + 1] == '0') || (mid == 0 && arr[y][mid] == '0')) {
            x = mid;
            break;
        }
        if (arr[y][mid] == '#' && arr[y][mid + 1] == '#') {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout << y << " " << x;

    return 0;
}
