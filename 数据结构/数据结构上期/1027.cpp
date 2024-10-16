#include <bits/stdc++.h>
using namespace std;
int n, m, k, cnt;
char name;
int main() {
	cin >> n;
	char a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	char b[m];
	for (int i = 0; i < m; i++) cin >> b[i];
	cin >> k;
	int i = 0, j = 0;
	while (k--) {
		if (i++ >= n) i = 0;
		if (j++ >= m) j = 0;	
	}
	if (i == 0) i = n;
	if (j == 0) j = m;
	cout << a[i - 1] << ' ' << b[j - 1];
	return 0;
}