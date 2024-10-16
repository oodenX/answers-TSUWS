#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char ch, root[N];
int d[N], cnt[N], ans;
void create(int u) {
    cin >> ch;
    if (ch == '#') return;
    root[u] = ch;
    d[u] = d[u / 2] + 1;
    cnt[d[u]]++;
    ans = max(ans, cnt[d[u]]);
    create(2 * u);
    create(2 * u + 1);
}
int main() {
    d[1] = 1;
    create(1);
    cout << ans;
    return 0;
}