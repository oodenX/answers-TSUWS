#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, m, num, a[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> m >> num;
    if (m > n) cout << "error!";
    else  for (int i = 1; i <= n; i++) {
            if (i == m) cout << num << ' ';
            cout << a[i] << ' ';
        }
    return 0;
}