#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int root[N], n, x, cnt, goal;
void add(int i, int val) {
    if (root[i] == 0) {
        root[i] = val;
        return;
    }
    if (val < root[i]) add(i * 2, val);
    if (val > root[i]) add(i * 2 + 1, val);
}
int find(int goal) {
    int cur = 1;
    while (root[cur]) {
        cnt++;
        if (goal == root[cur]) break;
        if (goal < root[cur]) cur = cur * 2;
        else cur = cur * 2 + 1;
    }
    return goal == root[cur] ? cnt : -1;
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        add(1, x);
    }
    cin >> goal;  
    cout << find(goal);
    return 0;
}