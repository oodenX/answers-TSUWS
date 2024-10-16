#include <bits/stdc++.h>
using namespace std;
int n, u, v, G[105][105], p[105];
bool vis[105];
void dfs(int x, int t) {
    vis[x] = true;
    p[t] = x;
    if (x == v) {
        for (int i = 0; i < t; i++) cout << p[i];
        cout << v << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        if (G[x][i] && !vis[i]) dfs(i, t + 1);
    }
    vis[x] = false; //这个题目要回溯
}
int main() {
    cin >> n >> u >> v;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> G[i][j];
    dfs(u, 0);
    return 0;
}