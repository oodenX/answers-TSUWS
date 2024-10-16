#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int a[N], n;
void heapify(int arr[], int i, int n) {
    int least = i, l = i * 2 + 1, r = i * 2 + 2;
    if (l < n && arr[l] < arr[least]) least = l;
    if (r < n && arr[r] < arr[least]) least = r;
    if (least != i) {
        swap(arr[i], arr[least]);
        heapify(arr, least, n);
    }
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n / 2 - 1; i >= 0; i--) heapify(a, i, n);
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}