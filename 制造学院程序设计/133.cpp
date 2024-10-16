#include <bits/stdc++.h>
using namespace std;
int n;
bool cmp(pair<string, string> p1, pair<string, string> p2) {
    //注意字符串比较是字典序比较的，利用这个就很简单的
    if (p1.second.size() == p2.second.size()) {
        if (p1.second == p2.second) return p1.first < p2.first; //这个题目有些坑，id要从小排序
        else return p1.second > p2.second;
    }
    return p1.second.size() > p2.second.size();
}
int main() {
    cin >> n;
    pair<string, string> p[n];
    for (int i = 0; i < n; i++) cin >> p[i].first >> p[i].second;
    sort(p, p + n, cmp);
    for (int i = 0; i < n; i++) cout << p[i].first << '\n';
    return 0;
}