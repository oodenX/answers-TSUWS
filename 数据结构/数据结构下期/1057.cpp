#include <bits/stdc++.h>
using namespace std;
int n, m, a, b, ans;
bool G[105][105];
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        G[a][b] = 1;
    }
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (G[i][j]) cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}