#include <iostream>
#include <string>
#include <algorithm>
std::string s1, s2;
int n;
int main() {
    std::cin >> n;
    while (n--) {
        std::cin >> s1 >> s2;
        std::sort(s1.begin(), s1.end());
        std::sort(s2.begin(), s2.end());
        s1 == s2 ? std::cout << "Yes\n" : std::cout << "No\n";
    }
    return 0;
}