#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int num;
int main() {
    cin >> num;
    while (num) {
        s.push(num % 2);
        num /= 2;
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    return 0;
}