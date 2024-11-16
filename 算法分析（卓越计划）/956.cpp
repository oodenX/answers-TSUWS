#include <iostream>
int n, m, a[100005];
int main() {
    std::cin >> n >> m;
    for (int i = 2; i <= n; i++) a[i] = (a[i - 1] + m) % i;
    std::cout << a[n] + 1;
    return 0;
}