#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char root[N], ch;
int ans = 1;
void create(int u, int cnt) {
    cin >> ch;
    if (cnt > ans) ans = cnt;
    if (ch == '#') return;
    root[u] = ch;
    create(u * 2, cnt);
    create(u * 2 + 1, cnt + 1);
}
int main() {
    create(1, 1);
    if (root[3]) cout << "ERROR";
    else cout << ans;
    return 0;
}