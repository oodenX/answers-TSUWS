#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    while (cin >> s) {
        reverse(s.begin(), s.end());
        cout << s << '\n';
    }
    return 0;
}
