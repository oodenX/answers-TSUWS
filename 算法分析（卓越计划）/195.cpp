#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
const int N = 1e3 + 10;
int main() {
    int s, n;
    while (cin >> s >> n) {
        vector<int> w(N), v(N), c;
        vector<vector<int>> dp(N, vector<int>(N, 0));

        for (int i = 1; i <= n; ++i) cin >> w[i] >> v[i];

        for (int i = 1; i <= n; ++i) {
            for (int j = s; j >= w[i]; --j) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            for (int j = 0; j < w[i]; ++j) dp[i][j] = dp[i - 1][j];
        }

        if (dp[n][s] == 0) {
            cout << 0 << endl;
            continue;
        }

        cout << dp[n][s] << endl;
        for (int i = n, j = s; i > 0; --i) {
            if (dp[i][j] != dp[i - 1][j]) {
                c.push_back(i);
                j -= w[i];
            }
        }

        sort(c.begin(), c.end());
        for (int i = 0; i < c.size(); ++i) {
            if (i == c.size() - 1) cout << c[i] << endl;
            else cout << c[i] << " ";
            // cout << c[i] << (i == c.size() - 1 ? "\n" : " ");
        }
    }

    return 0;
}
