#include <bits/stdc++.h>
using namespace std;
double t, m;
int main() {
    while (cin >> t >> m) {
        if (t < 0 || t > 7 * 24) printf("input is wrong!\n");
        else {
            if (t < 40)
                cout <<  t * m << '\n';
            else if (t >= 40)
                cout << 40 * m + (t - 40) * m * 1.5 << '\n';
            else
                cout << 40 * m + 20 * m * 1.5 + (t - 60) * m * 3 << '\n';
        }
    }
    return 0;
}