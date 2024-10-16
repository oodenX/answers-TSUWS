#include <bits/stdc++.h>
using namespace std;
double a;
int main() {
    while (cin >> a) {
        if (a < 1000) cout << "discount=1,pay=" << a << '\n';
        else if (a >= 1000 && a < 2000) 
        {
            cout << "discount=0.95,pay=" << a * 0.95 << '\n';
        }
        else if (a >= 2000 && a < 3000) 
        {
            cout << "discount=0.9,pay=" << a * 0.9 << '\n';
        }
        else if (a >= 3000 && a < 5000)
        {
            cout << "discount=0.85,pay=" << a * 0.85 << '\n'; 
        }
        else cout << "discount=0.8,pay=" << a * 0.8 << '\n';
    }
    return 0;
}