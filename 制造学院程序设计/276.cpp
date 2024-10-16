#include <bits/stdc++.h>
using namespace std;
int a, b;
char x;
int main() {
    while (cin >> a >> x >> b) {
        if (x == '+')
            printf("%d+%d=%d", a, b, a + b);
        else if (x == '-')
            printf("%d-%d=%d", a, b, a - b);
        else if (x == '*')
            printf("%d*%d=%d", a, b, a * b);
        else
            printf("%d/%d=%d", a, b, a / b);
        printf("\n");
    }
    return 0;
}