#include <bits/stdc++.h>    //万能头，以后都写这个也可以，学会用cin和cout更快
using namespace std;        //这个要加，因为不加的话就很麻烦
int a, b, ans;              //全局变量
bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= num / i; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    while (cin >> a >> b) { //这么这个可以多组输入
        ans = 0;
        if (a > b) swap(a, b);  //这个很坑，要注意先后大小
        for (int i = a; i <= b; i++) {
           if (isPrime(i)) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}