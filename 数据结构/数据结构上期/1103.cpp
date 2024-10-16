#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, r, l, a[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> l >> r;
    for (int i = 1; i <= n; i++) {
        if (a[i] >= l && a[i] <= r) continue;
        cout << a[i] << ' ';
    }
    return 0;
}