#include <bits/stdc++.h>
using namespace std;
int n, a[26], maxn;
string s;
int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) a[s[i] - 'a']++;
    for (int i = 0; i < 26; i++) {
        if (maxn < a[i]) maxn = a[i];
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] == maxn) cout << (char) (i + 'a') << '\n'; //注意这个题目要输出换行
    }
    return 0;
}