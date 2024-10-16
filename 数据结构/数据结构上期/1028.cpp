#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin >> s;
	s.erase(s.size() - 1);  //去掉最后一位
	string ss = s;
	reverse(s.begin(), s.end());
	if (ss == s) cout << "yes!";
	else cout << "no!";
	return 0;
}