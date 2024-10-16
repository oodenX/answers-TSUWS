#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, root[N];
bool isHeap(int u) {
    if (u > n) return true;
    if (u * 2 <= n && root[u * 2] < root[u]) return false;
    if (u * 2 + 1 <= n && root[u * 2 + 1] < root[u]) return false;
    return isHeap(u * 2) && isHeap(u * 2 + 1);
}
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> root[i];
    if (isHeap(1)) cout << "Yes";
    else cout << "No";
    return 0;
}