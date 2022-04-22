#include <iostream>
#include <unordered_map>
using namespace std;

struct node {
    int a;
    int check;
};

node heap[100];
int hn;

void push(int value, int checknum) {

    heap[++hn].a = value;
    heap[hn].check = checknum;
    int now = hn;
    int parent;
    while (1) {

        parent = now / 2;
        if (now == 1)break;
        if (heap[parent].a <= heap[now].a)break;

        swap(heap[parent], heap[now]);
        now = parent;
    }
}

int pop() {

    int backup = heap[1].a;
    int checknum = heap[1].check;
    heap[1].a = heap[hn].a;
    heap[1].check = heap[hn].check;
    heap[hn].a = 0;
    heap[hn--].check = 0;

    int now = 1;
    int son;

    while (1) {
        son = now * 2;
        if (son + 1 <= hn && heap[son].a > heap[son + 1].a)son++;
        if (son > hn || heap[son].a >= heap[now].a)break;
        swap(heap[now], heap[son]);
        now = son;
    }
    if (checknum == -1) {
        return -1;
    }
    else {
        return backup;
    }
}

int main() {

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        push(a, 1);
    }
    int cnt = 0;

    while (1)
    {
        int f = pop();
        if (f == -1) {
            cout << cnt;
            return 0;
        }
        cnt++;
        int s = pop();
        if (s == -1) {
            cout << cnt;
            return 0;
        }
        push(s * 2, -1);
        cnt++;
    }
    cout << cnt;

    return 0;
}