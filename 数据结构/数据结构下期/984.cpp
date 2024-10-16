#include <bits/stdc++.h>
using namespace std;
string a, b;
void dfs(string x, string y) {
    if (y.empty()) return;
    int i = x.find(y[0]);
    dfs(x.substr(0, i), y.substr(1, i));
    dfs(x.substr(i + 1), y.substr(i + 1));
    cout << y[0];
}
int main() {
    cin >> a >> b;
    dfs(a, b);
    return 0;
}