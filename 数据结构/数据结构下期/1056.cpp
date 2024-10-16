#include <bits/stdc++.h>
using namespace std;
int n, cnt, G[105][105];
char ch;
int main() {
    cin >> n;
    getchar();
    vector<string> v(n);
    for (int i = 0; i < n; i++) getline(cin, v[i]); //只限于这个题目，因为数据全是个位数
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (isdigit(v[i][j])) G[i][v[i][j] - '0'] = G[v[i][j] - '0'][i] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << G[i][j];
        }
        cout << '\n';
    }
    return 0;
}