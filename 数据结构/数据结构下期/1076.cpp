#include <bits/stdc++.h>
using namespace std;
bool G[105][105], vis[105], hasCycle = false; 
vector<int> st;
map<char, int> mp;
char ch, u, v;
int n, m;
bool dfs(int u) {
    vis[u] = true;
    st.push_back(u);
    for (int i = 0; i < n; i++) {
        if (G[u][i] && !vis[i]) {
            if (dfs(i)) return true;
        }
        else if (G[u][i] && vis[i]) {
            for (int it : st) {
                if (it == i) return true;
            }
        }
    }
    st.pop_back();
    return false;
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        mp[ch] = i;
    }
    while (m--) {
        cin >> u;
        getchar();
        cin >> v;
        G[mp[u]][mp[v]] = true;
    }
    for (int i = 0; i < n; i++) {
        if (!vis[i]) hasCycle = dfs(i);
        if (hasCycle) break;
    }
    if (hasCycle) cout << "yes";
    else cout << "no";  
    return 0;
}