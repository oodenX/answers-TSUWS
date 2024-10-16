#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, k, a[N];
int main() {
    cin >> n >> k;
    for (int i = 2; i <= n; i++) a[i] = (a[i - 1] + k) % i;
    cout << a[n] + 1;
    return 0;
}