#include <stdio.h>
double sum[505], a[505], b[505], c[505], d[505], e[505];
double suma = 0, sumb = 0, sumc = 0, sumd = 0, sume = 0;
long long id[505];
int n, i;
int main() {    //这题目没技巧
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%lld%lf%lf%lf%lf%lf", &id[i], &a[i], &b[i], &c[i], &d[i], &e[i]);
        sum[i] = a[i] + b[i] + c[i] + d[i] + e[i];
        suma += a[i], sumb += b[i], sumc += c[i], sumd += d[i], sume += e[i];
    }
    for (i = 1; i <= n; i++) {
        printf("%lld %g %g %g %g %g %.1lf\n", id[i], a[i], b[i], c[i], d[i], e[i], sum[i] / 5.0);
    }
    printf("%.1lf %.1lf %.1lf %.1lf %.1lf\n", suma / n, sumb / n, sumc / n, sumd / n, sume / n);
    return 0;
}