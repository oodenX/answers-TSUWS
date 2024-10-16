#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 5;
int arr[N], n, k;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    sort(arr + 1, arr + 1 + n);
    cout << arr[k] << '\n';
    return 0;
}