#include <iostream>
#include <algorithm>
#include <cmath>
int n, x[10005], y[10005], sum;
int main() {
    std::cin >> n;
    for (int i = 0; i < n; i++) std::cin >> x[i] >> y[i];
    std::sort(x, x + n);
    std::sort(y, y + n);
    for (int i = 0; i < n; i++) sum += std::abs(x[i] - x[n / 2]) + std::abs(y[i] - y[n / 2]);
    std::cout << sum << '\n';
    return 0;
}