#include <bits/stdc++.h>
char num[12][7] = { "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine", "+", "=" };
int check (char *input) {
    for (int i = 0; i < 12; i++) {
        if (strcmp(input, num[i]) == 0) return i;
    }
}
//这个题目会map更好做，不过现在就用这个就好了
int main (){
    char input[7];
    while (1) {
        int a = 0, b = 0;
        while (scanf("%s", input)) {
            if (check(input)==11) break;
            if (check(input)==10) {
                a = b;
                b = 0;
            }
            else {
                b = b * 10 + check(input);
            }
        }
        if (a + b == 0) break;
        else printf("%d\n", a + b);
    }
}