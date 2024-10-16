#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char root[N], val, ch;
int ans;
void create(int u) {
    cin >> ch;
    if (ch == '#' || ch == '\n') return;
    else root[u] = ch;
    create(u * 2);
    create(u * 2 + 1);
}
void dfs(int u) {
    if (root[u] == val) {   //这个题目很蠢的，答案就只有0,1,2三种
        if (root[u * 2]) ans++;
        if (root[u * 2 + 1]) ans++;
        return;
    }
    if (root[u * 2]) dfs(u * 2);
    if (root[u * 2 + 1]) dfs(u * 2 + 1);
}
int main() {
    create(1);
    cin >> val;
    dfs(1);
    cout << ans;
    return 0;
}