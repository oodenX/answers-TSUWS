#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, num, a[N], b[N];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num;
        b[num]++;
    }
    int k = *max_element(b, b + N);
    for (int i = 0; i < N; i++) {
        if (b[i] == k) {
            cout << i;
            return 0;
        }
    }
}