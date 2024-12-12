#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> r(n + 1, vector<int>(n + 1, INT_MAX));
    vector<int> dp(n + 1, INT_MAX);

    for (int i = 1; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            cin >> r[i][j];
        }
    }

    dp[1] = 0;
    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j < i; ++j) {
            if (r[j][i] != INT_MAX) {
                dp[i] = min(dp[i], dp[j] + r[j][i]);
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}
