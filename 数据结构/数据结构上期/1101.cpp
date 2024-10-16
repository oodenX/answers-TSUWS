#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, num, k, cnt, a[N];
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> k;
	if (k <= 0 || k >= n) {
		cout << "error!";
		return 0;
	}
	while (cnt < n) {
		if (k == n) k = 0;
		cout << a[k] << ' ';
		k++, cnt++;
	}
}