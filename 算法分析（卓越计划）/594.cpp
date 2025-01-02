#include <bits/stdc++.h>
using namespace std;

int dp[605][6005][2];
int arr[605];
int main() {
    int n, maxx;
    cin >> n >> maxx;
    for (int i = n; i >= 1; i--) cin >> arr[i];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= maxx; j++) {
            if (arr[i] <= j && dp[i - 1][j][0] < dp[i - 1][j - arr[i]][0] + 1) {
                dp[i][j][0] = dp[i - 1][j - arr[i]][0] + 1;
                dp[i][j][1] = dp[i - 1][j - arr[i]][1] + arr[i];
            }
            else if (arr[i] <= j && dp[i - 1][j][0] == dp[i - 1][j - arr[i]][0] + 1) {
                dp[i][j][0] = dp[i - 1][j][0];
                dp[i][j][1] = max(dp[i - 1][j][1], dp[i - 1][j - arr[i]][1] + arr[i]);
            }
            else {
                dp[i][j][0] = dp[i - 1][j][0];
                dp[i][j][1] = dp[i - 1][j][1];
            }
        }
    }

    cout << dp[n][maxx][0] << " " << dp[n][maxx][1] << endl;
    int i = n, j = dp[n][maxx][1], k;
    vector<int> pk;
    while (i && j) {
        if (dp[i][j][0] == dp[i - 1][j - arr[i]][0] + 1 && dp[i][j][1] == dp[i - 1][j - arr[i]][1] + arr[i]) {
            pk.push_back(arr[i]);
            j -= arr[i];
        }
        i--;
    }
    k = pk.size();
    for (int i = 0; i < k; i++) {
        if (i != 0) cout << " ";
        cout << pk[i];
    }
    cout << '\n';
}