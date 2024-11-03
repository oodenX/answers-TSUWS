#include <iostream>
double arr[1005][1005];
int n, m;
int main() {
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            std::cin >> arr[i][j];
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++) {
            if (i == k) continue;
            double p = arr[i][k] / arr[k][k];
            for (int j = 1; j <= m; j++) arr[i][j] -= p * arr[k][j];
        }
    for (int i = 1; i < n; i++) printf("%.2lf ", arr[i][m] / arr[i][i]);
    printf("%.2lf\n", arr[n][m] / arr[n][n]);
    return 0;
}