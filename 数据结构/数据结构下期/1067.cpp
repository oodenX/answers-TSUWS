#include <bits/stdc++.h>
using namespace std;
int n, m, u, v, cnt;
bool G[105][105], vis[105];
void dfs(int u) {
    cnt++;
    vis[u] = true;
    for (int i = 0; i < n; i++) {
        if (G[u][i] && !vis[i]) dfs(i);
    }
}
int main() {
    cin >> n >> m;
    while (m--) {
        cin >> u >> v;
        G[u][v] = true;
    }
    for (int i = 0; i < n; i++) {
        memset(vis, false, sizeof(vis));
        cnt = 0;
        dfs(i);
        if (cnt != n) {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
}