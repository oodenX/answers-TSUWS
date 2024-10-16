#include <iostream>
using namespace std;
const int N = 1e5 + 5;
int n, m, a[N];
int main() {
    cin >> n >> m;
    for (int i = 2; i <= n; i++) a[i] = (a[i - 1] + m) % i;
    cout << a[n] + 1;
    return 0;
}