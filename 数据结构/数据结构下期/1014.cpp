#include <bits/stdc++.h>
using namespace std;
int n, m;
int main() {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) if (a[i - 1] > a[i]) swap(a[i - 1], a[i]);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}