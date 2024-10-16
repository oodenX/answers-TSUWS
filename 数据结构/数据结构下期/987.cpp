#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char root[N], ch;
void create(int u) {
    cin >> ch;
    if (ch == '#') return;
    root[u] = ch;
    create(u * 2);
    create(u * 2 + 1);
}
void check() {
    if (root[1] && !root[2] && !root[3]) {  //这是判断是否只有一个节点
        cout << "Y";
        return;
    }
    for (int i = 1; i < N; i++) {   //就是找是否有一个孤立的节点
        if (!root[i - 1] && root[i] && root[i + 1]) {
            cout << "N";
            return;
        }
    }
    cout << "Y";
}
int main() {
    create(1);
    check();
    return 0;
}