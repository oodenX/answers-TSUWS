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
     for (int i = 1; i < N; i++) {
        if (root[i]) cout << root[i];
    }
    return 0;
}