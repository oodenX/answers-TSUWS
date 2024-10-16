#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int num, n, m, a[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> m;
    for (int i = 1; i <= m; i++) cin >> a[i + n];
    sort(a + 1, a + 1 + n + m);
    for (int i = 1; i <= n + m; i++) cout << a[i] << ' ';
    return 0;
}