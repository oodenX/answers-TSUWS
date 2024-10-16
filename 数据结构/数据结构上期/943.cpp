#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, num, a[N], pos, goal;
bool p = true;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    cin >> pos >> goal;
    for (int i = 1; i <= n; i++) {
        if (a[i] == pos) {
            cout << goal << ' ';
            p = false;
        }
        cout << a[i] << ' ';
    }
    if (p) cout << goal << ' ';   //如果没有那么直接在最后输出
    return 0;
}