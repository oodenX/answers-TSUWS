#include <bits/stdc++.h>
using namespace std;
int a, b;
int main() {
    while (cin >> a >> b) {
        cout << sizeof(int) << ' ' << sizeof(char) << '\n' << (char)a << ' ' << (char)b << '\n';
        //printf("%d %d\n", sizeof(int), sizeof(char));
        //printf("%c %c\n", (char)a, (char)b);
    }
    return 0;
}