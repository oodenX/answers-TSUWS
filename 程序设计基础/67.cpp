#include <bits/stdc++.h>
using namespace std;
struct stu {
    long long id;
    char cla[15], na[15];
    double a, b, c, d;
} s[105];
bool cmp(stu s1, stu s2) {
    return s1.d > s2.d;
}
double suma = 0, sumb = 0, sumc = 0;
int n;
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld%s%s%lf%lf%lf", &s[i].id, s[i].cla, s[i].na, &s[i].a, &s[i].b, &s[i].c);
        s[i].d = (s[i].a + s[i].b + s[i].c) / 3.0;
        suma += s[i].a;
        sumb += s[i].b;
        sumc += s[i].c;
    }
    for (int i = 0; i < n; i++) printf("%s %.1lf\n", s[i].na, s[i].d);
    sort(s, s + n, cmp);    //用sort会省去很多代码，这个题目只是看着长，思路其实很简单
    printf("%lld %s %s %.1lf %.1lf %.1lf %.1lf\n", s[0].id, s[0].cla, s[0].na, s[0].a, s[0].b, s[0].c, s[0].d);
}