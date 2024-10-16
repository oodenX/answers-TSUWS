#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
    while (cin >> n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) sum = sum + i * i;
        cout << sum << "\n";
    }
    return 0;
}