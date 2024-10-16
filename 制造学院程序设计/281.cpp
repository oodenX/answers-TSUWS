#include <bits/stdc++.h>
using namespace std;
int d, u, h;
int solve(int h, int u, int d) {
    int ans = 0;
    while (h > 0) {
        h -= u;
        ans++;
        if (h <= 0) break;
        h += d;
        ans++;
    }
    return ans;
}
int main() {
    while (1) {
        cin >> h >> u >> d;
        if (h == 0 && u == 0 && d == 0) break;  //break条件
        cout << solve(h, u, d) << "\n";
    }
    return 0;
}