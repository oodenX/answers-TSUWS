#include <bits/stdc++.h>
using namespace std;
stack<int> s;
string str;
int main() {
    cin >> str;
    for (char a : str) {
        if (a == '(' || a == '[' || s.empty()) s.push(a);
        else if (s.top() == '(' && a == ')') s.pop();
        else if (s.top() == '[' && a == ']') s.pop();
        else s.push(a);
    }
    if (s.empty()) cout << "YES";
    else cout << "NO";
    return 0;
}