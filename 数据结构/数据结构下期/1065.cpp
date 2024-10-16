#include <bits/stdc++.h>
using namespace std;
bool G[105][105], vis[105];
int n, cnt; //这个题目和找迷宫有多少种路径的解法基本一致
void dfs(int u) {
    vis[u] = true;
    for (int i = 0; i < n; i++) {
        if (G[u][i] && !vis[i]) dfs(i);
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> G[i][j];
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            cnt++;
            dfs(i);
        }
    }
    cout << cnt;
    return 0;
}