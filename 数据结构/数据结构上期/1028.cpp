#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin >> s;
	s.erase(s.size() - 1);  //ȥ�����һλ
	string ss = s;
	reverse(s.begin(), s.end());
	if (ss == s) cout << "yes!";
	else cout << "no!";
	return 0;
}