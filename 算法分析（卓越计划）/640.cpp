/* #include <iostream>
using namespace std;
int n, k, pos = -1;
int main() {
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++)
        if (arr[i] == k) {
            pos = i + 1;
            break;
        }
    cout << pos << '\n';
    return 0;
} */
// 下面这个更短
#include <iostream>
#include <set>
using namespace std;
set<int> s;
int n, k, num;
int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> num, s.insert(num);
    if (s.find(k) != s.end()) cout << *s.find(k) + 1 << '\n';
    else cout << -1 << '\n';
    return 0;
}