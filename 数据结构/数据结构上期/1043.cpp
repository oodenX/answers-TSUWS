#include <bits/stdc++.h>
using namespace std;
stack<int> s;
char ch;
int main() {
    while (cin >> ch) {
        if (ch == '#') break;
        if (isdigit(ch)) s.push(ch - '0');
        else {
            int b = s.top(); s.pop();
            int a = s.top(); s.pop();
            int c = 0;
            if (ch == '+') s.push(a + b);
            if (ch == '-') s.push(a - b);
            if (ch == '*') s.push(a * b);
            if (ch == '/') s.push(a / b);
        }
    }
    cout << s.top();
    return 0;
}