#include <bits/stdc++.h>
using namespace std;
int n, G[105][105];
bool vis[105];
string s;
char ch;
void bfs(int u) {
    queue<int> q;
    q.push(u);
    while (!q.empty()) {
        int t = q.front();
        q.pop();
        if (vis[t]) continue;
        vis[t] = true;
        cout << s[t];
        for (int i = 0; i < n; i++) {
            if (G[t][i] && !vis[i]) q.push(i);
        }
    }
}
int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> G[i][j];
    cin >> ch;
    bfs(s.find(ch));
    return 0;
}