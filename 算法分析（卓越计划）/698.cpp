#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f; // 设置一个最大值
const int MAX_N = 500;     // 作业个数
const int MAX_M = 5e4 + 5; // 完成时间总和
int a[MAX_N], b[MAX_N];
int dp[MAX_M];
int main() {
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 1; i <= n; i++) cin >> b[i];
    memset(dp, 0, sizeof(dp)); // 初始化
    for (int i = 1; i <= n; i++){
        for (int j = sum; j >= 0; j--) {
            if (j < a[i]) dp[j] += b[i]; // 第i个任务给B完成
            else dp[j] = min(dp[j] + b[i], dp[j - a[i]]); // 考虑分配给A还是B
        }
    }
    int ans = INF;
    for (int i = 0; i <= sum; i++) {
        int temp = max(dp[i], i); // 求完成n个任务的最后时间，因为只有最后一台机器完成了，整个作业才算完成
        ans = min(ans, temp); // 最后取个最小值即可
    }
    cout << ans << '\n';
    return 0;
}
