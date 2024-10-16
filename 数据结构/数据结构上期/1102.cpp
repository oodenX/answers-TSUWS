#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
stack<int> s1;
queue<int> s2;
int n, a[N];
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[0]) s1.push(a[i]);
        else s2.push(a[i]);
    }
    while (!s1.empty()) {
        cout << s1.top() << ' ';
        s1.pop();
    }
    cout << a[0] << ' ';
    while (!s2.empty()) {
        cout << s2.front() << ' ';
        s2.pop();
    }
    return 0;
}

