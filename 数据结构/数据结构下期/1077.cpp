#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char ch, root[N];
void create(int u) {
    cin >> ch;
    if (ch == '#') return;
    root[u] = ch;
    create(u * 2);
    create(u * 2 + 1);
}
int getHeight(int u) {
    if (!root[u]) return 0;
    int l = getHeight(u * 2), r = getHeight(u * 2 + 1);
    if (l < 0 || r < 0 || abs(l - r) > 1) return -1;
    return max(l, r) + 1;
}
int main() {
    create(1);
    if (getHeight(1) > 0) cout << "yes!";
    else cout << "no!";
    return 0;
}