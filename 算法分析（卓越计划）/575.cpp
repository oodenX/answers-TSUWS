#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> T(n + 1), Coins(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> T[i] >> Coins[i];
    }
    int m;
    cin >> m;

    vector<int> dp(m + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < Coins[i]; ++j) {
            for (int k = m; k >= T[i]; --k) {
                if (dp[k - T[i]] != INT_MAX) {
                    dp[k] = min(dp[k], dp[k - T[i]] + 1);
                }
            }
        }
    }

    if (dp[m] == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << dp[m] << endl;
    }

    return 0;
}
