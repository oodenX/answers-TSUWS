#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, m, a[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> m;
    if (m > n || m <= 1) cout << "error!";
    else for (int i = 1; i <= n; i++) {
        if (i == m - 1) continue;
        cout << a[i] << ' ';
    }
    return 0;
}