#include <string>
#include <iostream>
using namespace std;
string pattern, text;
int main() {
    cin >> pattern >> text;
    if (text.find(pattern) == string::npos) cout << -1 << '\n';
    else cout << text.find(pattern) << '\n';
    return 0;
}