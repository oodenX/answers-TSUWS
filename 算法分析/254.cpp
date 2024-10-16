#include <iostream>
#include <algorithm>
using namespace std;
const int N = 1e5 + 5;
int n, m, sum, index, arr[N];
int main() {
    cin >> n;
    int m = n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        int maxValue = 0;
        for (int j = 0; j < m; j++) {
            if (arr[j] > maxValue) {
                maxValue = arr[j];
                index = j;
            }
        }
        if (index != m - 1 && index) {
            reverse(arr, arr + index + 1);
            reverse(arr, arr + m);
            sum += 2;
        }
        else if (index != m - 1 && !index) {
            reverse(arr, arr + m);
            sum += 1;
        }
        m--;
    }
    cout << sum << '\n';
    return 0;
}