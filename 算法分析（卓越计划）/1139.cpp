#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1) {
        cout << coins[0] << endl;
        return 0;
    }

    vector<int> dp(n);
    dp[0] = coins[0];
    dp[1] = max(coins[0], coins[1]);

    for (int i = 2; i < n; ++i) {
        dp[i] = max(dp[i-1], dp[i-2] + coins[i]);
    }

    cout << dp[n-1] << endl;

    return 0;
}
