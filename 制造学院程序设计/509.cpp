#include <bits/stdc++.h>
using namespace std;
int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};//先把每个月有多少日都写好
int year, month, day, i, sum;
int main () {
    while (cin >> year >> month >> day) {
        for(i = 0; i < month - 1; i ++) day += a[i];
        day = day + (year - 2007) * 365 -243;
        if((year == 2008 && month > 2) || year > 2008) day++;
        if(day % 7 == 3) cout << "ALL\n";
        sum = day - day / 7;
        if(day % 7 >= 3) sum --;
    
        int x = sum % 4;
        if (x == 1) cout << "B\n";
        else if (x == 2) cout << "X\n";
        else if (x == 3) cout << "H\n";
        else if (x == 0) cout << "P\n";
    }
    return 0;
}