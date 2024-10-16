#include <bits/stdc++.h>
using namespace std;
int n, maxValue, cnt, a[105];
bool G[105][105];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> G[i][j];
            if (G[i][j]) a[i]++;
        }
    }
    maxValue = *max_element(a, a + n);
    cout << maxValue << '\n';
    for (int i = 0; i < n; i++) {
        if (maxValue == a[i]) cout << i;
    }
    return 0;
}