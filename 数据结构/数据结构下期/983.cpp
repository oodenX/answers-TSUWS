#include <bits/stdc++.h>
using namespace std;    
string a, b;
void dfs(string x, string y) {
    if (x.empty()) return;
    int i = x.find(y.back());
    cout << y.back();
    dfs(x.substr(0, i), y.substr(0, i));
    dfs(x.substr(i + 1), y.substr(i, y.size() - i - 1));
}
int main() {
    cin >> a >> b;
    dfs(a, b);
    return 0;
}