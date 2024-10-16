#include <bits/stdc++.h>
using namespace std;
int n;
int main () {
    cin >> n;
    while (n--) {
        int time = 13 * 60 + 15;
        string clock;   //string这个是c++的，不过最好简单了解下，比char数组好用多了
        cin >> clock;
        int now = 0;
        for(int i = 0; i < clock.size(); i++) {
            if(clock[i] == ':'){
                time += 60 * now;
                now = 0;    //归零
            }
            else now = now * 10 + (int) (clock[i] - '0');
        }
        time += now;
        cout << (time / 60) % 24 << ':' << time % 60 << '\n';
        //printf("%d:%d\n",(time / 60) % 24, time % 60);
    }
    return 0;
}