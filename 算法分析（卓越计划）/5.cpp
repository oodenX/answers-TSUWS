#include <iostream>
#include <algorithm>
using namespace std;
int a, b;
int main() {
    cin >> a >> b;
    a /= __gcd(a, b);
    if (a & 1) cout << "A\n";
    else cout << "B\n";
    return 0;
}