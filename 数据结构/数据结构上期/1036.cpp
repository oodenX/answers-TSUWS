#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int n, num, ans = -1;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        mp[num]++;
    }
    for (auto it : mp) {
        if (it.second > n / 2) ans = it.first;
    }
    cout << ans;
    return 0;
}