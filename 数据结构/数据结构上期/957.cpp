#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int main() {
    cin >> n >> s;
    for (int i = s.size() - 1; i >= 0; i--) cout << s[i] << ' ';
    return 0;
}