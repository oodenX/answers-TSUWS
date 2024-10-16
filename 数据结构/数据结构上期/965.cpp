#include <bits/stdc++.h>
using namespace std;
int n, k, num;
queue<int> q;
string s;
int main() {
	cin >> n >> k;
	while (k--) {
		cin >> s;
		if (s[0] == 'i') {
			cin >> num;
			if (q.size() < n - 1) q.push(num);
		}
		else {
			if (!q.empty()) q.pop();
		}
	}
	while (!q.empty()) {
		cout << q.front() << ' ';
		q.pop();
	}
	return 0;
}