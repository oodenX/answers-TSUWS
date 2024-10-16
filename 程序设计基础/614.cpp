#include <bits/stdc++.h>
using namespace std;
double pi = 3.14159, r, h;
int main() {
    while (cin >> r >> h) {
        printf("radius:%.3lf\n", r);
        printf("high:%.3lf\n", h);
        printf("The volume is:%.3lf\n", pi * r * r * h);
    }
    return 0;
}