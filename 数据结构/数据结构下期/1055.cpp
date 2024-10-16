#include <bits/stdc++.h>
using namespace std;
int n, num;
int main() {
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> num;
            if (num) v[i].push_back(j);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v[i].size(); j++) cout << v[i][j];
        cout << '\n';
    }
    return 0;
}