#include <iostream>
double arr[1005][1005];
int n, m;
int main() {
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            std::cin >> arr[i][j];
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            double p = arr[j][i] / arr[i][i];
            for (int k = 1; k <= m; k++) arr[j][k] -= p * arr[i][k];
        }
    }
    
    for (int i = 1; i <= n; i++) printf("%.2lf ", arr[i][m] / arr[i][i]);
    return 0;
}