#include <iostream>
#include <algorithm>
int n, arr[100005];
int main() {
    std::cin >> n;
    for (int i = 1; i <= n; i++) std::cin >> arr[i];
    std::sort(arr + 1, arr + 1 + n);
    for (int i = 1; i <= n; i++) {
        std::cout << arr[i];
        i % 10 == 0 || i == n ? std::cout << '\n' : std::cout << "  ";
    }
    return 0;
}
