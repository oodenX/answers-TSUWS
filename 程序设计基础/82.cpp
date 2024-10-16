#include <bits/stdc++.h>
using namespace std;
int cal(int n, int r) {
    int ans = 1, y = 1;
    if (r == 0) return 1;
    else if (r == 1) return n;
    else {
        while (y <= r) {
            ans = ans * (n - y + 1) / y;
            ++y;
        }
        return ans;
    }
}
int n, r;
int main() {
    while (1) {
        cin >> n >> r;
        if (n == 0 && r == 0) break;
        if (r > n) cout << "error!\n";
        else cout << cal(n, r) << "\n";
    }
    return 0;
}