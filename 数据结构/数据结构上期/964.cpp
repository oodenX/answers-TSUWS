#include <bits/stdc++.h>
using namespace std;
int n, m, cnt, G[105][105];
void dfs(int x, int y) {
    G[x][y] = 0;
    if (G[x + 1][y]) dfs(x + 1, y);
	if (G[x - 1][y]) dfs(x - 1, y);
	if (G[x][y + 1]) dfs(x, y + 1);
	if (G[x][y - 1]) dfs(x, y - 1);
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++) 
            cin >> G[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (G[i][j]) {
                dfs(i, j);
                cnt++;
            }
    cout << cnt;
    return 0;
}