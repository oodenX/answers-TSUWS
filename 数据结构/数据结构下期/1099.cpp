#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, a[N];
void ShellSort() {
    int gap = n / 2;
    for (int i = gap; i < n; i++) {
        int temp = a[i], j = i;
        while (a[j - gap] > temp) {
            a[j] = a[j - gap];
            j -= gap;
        }
        a[j] = temp;
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    ShellSort();
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}