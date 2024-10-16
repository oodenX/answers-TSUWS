#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
char ch, root[N];
int n;  //这个题目很蠢,就是先序插入，再中序遍历和先序遍历
void create(int u) {
    cin >> ch;
    if (ch == '#') return;
    root[u] = ch;
    create(u * 2 + 1);
    create(u * 2);
}
void print1(int u) {
    if (root[u * 2]) print1(u * 2);
    cout << root[u];
    if (root[u * 2 + 1]) print1(u * 2 + 1);
}
void print2(int u) {
    cout << root[u];
    if (root[u * 2]) print2(u * 2);
    if (root[u * 2 + 1]) print2(u * 2 + 1);
}
int main() {
    create(1);
    print1(1);
    cout << '\n';
    print2(1);
    return 0;
}