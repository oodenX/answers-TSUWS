#include <bits/stdc++.h>
using namespace std;
double e[105][105];
int n, m, cnt;
int main() {
    while (cin >> n, n) {
        memset(e, 1, sizeof e);
        string s, t;
        map<string, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> s;
            mp[s] = i;
        }
        cin >> m;
        for (int i = 0; i < m; i++) {
            double x;
            cin >> s >> x >> t;
            e[mp[s]][mp[t]] = x;
        }
        for (int k = 0; k < n; k++)
            for (int i = 0; i < n; i++)
                for (int j = 0; j < n; j++)
                    e[i][j] = max(e[i][j], e[i][k] * e[k][j]);
        bool mark = false;
        for (int i = 0; i < n; i++) {
            if (e[i][i] > 1) {
                mark = true;
                break;
            }
        }
        cout << "Case " << ++cnt << " " << (mark ? "Yes" : "No") << '\n';
    }
    return 0;
}
