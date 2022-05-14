#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<string> arr;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arr.push_back(s);
    }
    sort(arr.begin(), arr.end());
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        int search_time;
        cin >> search_time;
        int start = 0;
        int end = n - 1;
        int cnt = 0;
        while (1) {
            if (cnt >= search_time) {
                cout << "fail" << endl;
                break;
            }
            int mid = (start + end) / 2;
            if (start > end) {
                cout << "fail" << endl;
                break;
            }
            if (arr[mid] == s) {
                cout << "pass" << endl;
                break;
            }
            if (arr[mid] < s) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
            cnt++;
        }
    }

    return 0;
}


