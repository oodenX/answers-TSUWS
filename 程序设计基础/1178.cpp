#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
	while (cin >> s) {
		for(int i = 0; i < s.size(); i++) {
			if (s[i] >= 'a' && s[i] <= 'y') s[i]++;
			else if (s[i] >= 'A'&&s[i] <= 'Y') s[i]++;
			else if (s[i] == 'z') s[i] = s[i] - 25;
			else if (s[i] == 'Z') s[i] = s[i] - 25;
		}
        cout << s << '\n';
    }
    return 0;
}