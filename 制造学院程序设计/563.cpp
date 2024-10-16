#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
		else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
	}
	cout << s << '\n';
    return 0;
}