#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int n, m, num, key, goal, cnt;
int a[N];
void search() {
    cin >> goal;
    key = goal % n;
    while (1) {
        cnt++;
        if (a[key] == goal) {
            cout << key << "," << cnt;
            return;
        }
        if (cnt > n) break;
    }
    cout << -1;
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> num;
        key = num % n;
        while (1) {
            if (a[key] == 0) {
                a[key] = num;
                break;
            }
            else key = (key + 1) % n;
        }
    }
    search();
    return 0;
}