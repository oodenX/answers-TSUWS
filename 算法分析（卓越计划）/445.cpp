#include <iostream>
#include <algorithm>
using namespace std;
int arr[10005], n, k;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    sort(arr + 1, arr + 1 + n);
    cout << arr[k] << '\n';
    return 0;
}