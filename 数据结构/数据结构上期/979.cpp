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
}
void print(int u) {
    if (!root[u]) return;
    print(2 * u);
    print(2 * u + 1);
    cout << root[u];
}
int main() {
    create(1);
    print(1);
    return 0;
}