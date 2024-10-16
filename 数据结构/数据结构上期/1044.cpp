#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int n, m, num;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        s.push(num);
    }
    cin >> m;
    for (int i = 1; i <= m; i++) s.pop();
    if (s.empty()) cout << -1;
    else cout << s.top();
    return 0;
}