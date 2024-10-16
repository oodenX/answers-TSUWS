#include <bits/stdc++.h>
using namespace std;
int n, a, b;
bool G[105][105];
int main() {
    cin >> n >> a >> b;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
            cin >> G[i][j];
    if (G[a][b] || G[b][a]) cout << "yes";
    else cout << "no";
    return 0;
}