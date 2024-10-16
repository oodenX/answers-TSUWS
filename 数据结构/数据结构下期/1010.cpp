#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], n, goal, cnt;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> goal;
    int l = 0, r = n - 1, mid;
    while (l <= r) {
        cnt++;
        mid = (l + r) / 2;
        if (a[mid] == goal) break;
        if (a[mid] < goal) l = mid + 1;
        else r = mid - 1;
    }
    if (a[mid] != goal) cout << -1 << '\n';
    else cout << mid << '\n';
    cout << cnt;
    return 0;
}