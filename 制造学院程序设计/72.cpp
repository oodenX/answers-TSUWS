#include <bits/stdc++.h>
int pre[1005], a[1005];
using namespace std;
int n, sum; //这个题目我用的前缀和,不过有自己的方法也可以写自己的
int main () {
    cin >> n;
    for (int i = 1;i <= n;i ++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a + 1, a + n + 1); //因为我喜欢从1开始输入，所以这个sort函数就要注意点
    for (int i = 1;i <= n; i ++) pre[i] = pre[i - 1] + a[i];
    for (int i = 1;i < n; i ++) sum += pre[i]; 
    printf("%.2lf\n", 1.0 * sum / n);
    return 0;
}