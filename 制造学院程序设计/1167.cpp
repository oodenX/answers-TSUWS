#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    while (cin >> s) {
        string s1, s2, s3;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) s1 += s[i];
            else if (s[i] >= '0' && s[i] <= '9') s2 += s[i];
            else s3 += s[i];
        }
        cout << s1 << '\n' << s2 << '\n' << s3 << '\n';
    }
    return 0;
}