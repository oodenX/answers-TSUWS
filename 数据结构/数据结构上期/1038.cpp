#include <bits/stdc++.h>
using namespace std;
set<int> s;
int n, num;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> num, s.insert(num);
    cin >> num;
    s.erase(num);
    if (s.empty()) cout << -1;
    else for (int it : s) cout << it << ' ';
    return 0;
}