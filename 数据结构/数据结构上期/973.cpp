#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char ch, root[N];
int cnt;
void create(int u) {
    cin >> ch;
    if (ch == '#') return;
    root[u] = ch;
    create(2 * u);
    create(2 * u + 1);
    if (!root[2 * u] && !root[2 * u + 1]) cnt++;
}
int main() {
    create(1);
    cout << cnt;
    return 0;
}