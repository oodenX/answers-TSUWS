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
int main() {
    create(1);
    int cnt = 0, u = 1;
    while (root[u]) {
        u = u * 2 + 1;
        cnt++;
    }
    cout << cnt;
    return 0;
}