#include <bits/stdc++.h>
using namespace std;
int G[105][105];
bool vis[105];
int n;
string s;
char ch;
void dfs(int u) {
    cout << s[u];
    vis[u] = true;
    for (int i = 0; i < n; i++) {
        if (G[u][i] && !vis[i]) dfs(i);
    }
}
int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++)
            cin >> G[i][j];
    cin >> ch;
    dfs(s.find(ch));
    return 0;
}