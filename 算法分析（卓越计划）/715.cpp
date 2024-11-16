#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int n, num;
string s;
void dfs(string current, char last_char, int length) {
    if (length == 0) {
        mp[current] = ++num;
        return;
    }
    for (char c = last_char + 1; c <= 'z'; c++) dfs(current + c, c, length - 1);
}
int main() {
    for (int i = 1; i <= 6; i++) dfs("", 'a' - 1, i);  // 生成长度为 1 到 6 的所有字符串
    cin >> n;
    while (n--) {
        cin >> s;
        cout << mp[s] << '\n';
    }
    return 0;
}