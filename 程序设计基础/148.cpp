#include <bits/stdc++.h>
using namespace std;
int a[10], h, ans;
int main() {
    for (int i = 0; i < 10; i++) cin >> a[i];
    cin >> h;
    h += 30;
    for (int i = 0; i < 10; i++) if (h >= a[i]) ans++;
    cout << ans << '\n';
    return 0;
}