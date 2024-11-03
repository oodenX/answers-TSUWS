#include <iostream>
int n, x, a, sum, i, j;
int main() {
    std::cin >> n >> x;
    for (i = 0; i <= n; i++) {
        std::cin >> a;
        for (j = 0; j < i; j++) a *= x;
        sum += a;
    }
    std::cout << sum << '\n';
    return 0;
}