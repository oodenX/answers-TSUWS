#include <iostream>
int n;
int solve(int n) {
    if (n == 1) return 1;
    if (n & 1) return 2 * solve(n / 2) + 1;
    else return 2 * solve(n / 2) - 1;
}
int main() {
    std::cin >> n;
    std::cout << solve(n) << '\n';
    return 0;
}