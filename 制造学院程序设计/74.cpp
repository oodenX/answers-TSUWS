#include <bits/stdc++.h>
using namespace std;
int a[3][3], b[3][3], c[3][3];
int main()
{
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> a[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> b[i][j];
    //前面两个是输入
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++) c[i][j] += a[i][k] * b[k][j];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << c[i][j];
            if (j != 3)
                cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}