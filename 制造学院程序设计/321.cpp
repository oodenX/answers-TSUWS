#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    while (cin >> n) {
        int ans = 1;
        for (int i = 1; i <= n; i++) ans = ans * i;
        cout << ans << "\n";
    }
    return 0;
}