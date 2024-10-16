#include <bits/stdc++.h>
using namespace std;
int num;
void change(int num, int base) {
    stack<int> s;
    if (num == 0) {
        cout << "0\n";
        return;
    }
    while (num) {
        s.push(num % base);
        num /= base;
    }
    while (!s.empty()) {
        cout << s.top(); 
        s.pop();
    }
    cout << '\n';
}
int main() {
    while (cin >> num) {
        change(num, 2);
        change(num, 8);
    }
    return 0;
}