#include <bits/stdc++.h>
using namespace std;
stack<char> st;
string s;
map<char, int> mp;
string prefixTosuffix(string s) {
    string res;
    for (auto ch : s) {
        if (isalpha(ch)) {
            res.push_back(ch); 
            continue;
        }
        if (ch == '(') {
            st.push(ch);
            continue;
        }
        if (ch == ')') {
            while (!st.empty()) {
                if (st.top() == '(') {
                    st.push(ch);
                    break;
                }
                res.push_back(st.top());
                st.pop();
            }
            continue;
        }
        while (!st.empty() && st.top() >= ch) {
            if (st.top() == '(') break;
            res.push_back(st.top());
            st.pop();
        }
        st.push(ch);
    }
    while (!st.empty()) {
        if (st.top() != '(' && st.top() != ')') res.push_back(st.top());
        st.pop();
    }
    return res;
}
int main() {
    cin >> s;
    cout << prefixTosuffix(s);
    return 0;
}