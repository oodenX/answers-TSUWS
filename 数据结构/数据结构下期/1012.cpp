#include <bits/stdc++.h>
using namespace std;
int n, m, goal, num;
int main() {
    cin >> n >> m;
    vector<vector<int>> v(m);
    for (int i = 0; i < n; i++) {
        cin >> num;
        v[num % n].push_back(num);
    }
    cin >> goal;
    int g = goal % m;
    for (int i = 0; i < v[g].size(); i++) {
        if (goal == v[g][i]) {
            cout << g << "," << i + 1;
            return 0;
        }
    }
    cout << -1;
}