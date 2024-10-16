#include <bits/stdc++.h>
using namespace std;
int n, a;
int main() {
    cin >> n;
    while (n--) {
        cin >> a;
        if (a % 2 == 1) cout << "0 0\n";    //如果是奇数，那就没得
        else cout << a / 4 + (a % 4) / 2 << ' ' << a / 2 << '\n';
    }
    return 0;
}