#include <bits/stdc++.h>
using namespace std;
int y, m, d;
int main() {
    while (cin >> y >> m >> d) {
        int day = 0;
        for (int i = 1; i < y; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
                day += 366;
            else
                day += 365;
        }
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
            if (m == 1)
                day += 0;
            else if (m == 2)
                day += 31;
            else if (m == 3)
                day += 60;
            else if (m == 4)
                day += 91;
            else if (m == 5)
                day += 121;
            else if (m == 6)
                day += 152;
            else if (m == 7)
                day += 182;
            else if (m == 8)
                day += 213;
            else if (m == 9)
                day += 244;
            else if (m == 10)
                day += 274;
            else if (m == 11)
                day += 305;
            else if (m == 12)
                day += 335;
            day += d;
        }
        else
        {
            if (m == 1)
                day += 0;
            else if (m == 2)
                day += 31;
            else if (m == 3)
                day += 59;
            else if (m == 4)
                day += 90;
            else if (m == 5)
                day += 120;
            else if (m == 6)
                day += 151;
            else if (m == 7)
                day += 181;
            else if (m == 8)
                day += 212;
            else if (m == 9)
                day += 243;
            else if (m == 10)
                day += 273;
            else if (m == 11)
                day += 304;
            else if (m == 12)
                day += 334;
            day += d;
        }
        int da = day % 7;
        if (da == 1)
            cout << "Monday";
        else if (da == 2)
            cout << "Tuesday";
        else if (da == 3)
            cout << "Wednesday";
        else if (da == 4)
            cout << "Thursday";
        else if (da == 5)
            cout << "Friday";
        else if (da == 6)
            cout << "Saturday";
        else if (da == 0)
            cout << "Sunday";
        cout << "\n";
    }
}