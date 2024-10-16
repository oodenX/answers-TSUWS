#include <bits/stdc++.h>
using namespace std;
int cal(int n) {
    if (n == 1) return 1;
    return (cal(n - 1) + 1) * 2;
}
int n;
int main() {
    while (cin >> n) {
        cout << cal(n) << '\n';
    }
    return 0;
}