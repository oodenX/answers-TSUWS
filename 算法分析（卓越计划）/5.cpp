#include <iostream>
#include <algorithm>
using namespace std;
int a, b, c;
int main() {
    cin >> a >> b;
    c /= __gcd(a, b);
    if (c & 1) cout << "A\n";
    else cout << "B\n";
    return 0;
}