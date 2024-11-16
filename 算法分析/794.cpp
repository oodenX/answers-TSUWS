#include <iostream>
#include <vector>
#include <cmath>
int t, n, d, dx, dy;
struct Point {
    int x, y;
};
int main() {
    std::cin >> t;
    while (t--) {
        std::cin >> n;
        std::vector<Point> points(n);
        for (int i = 0; i < n; i++) std::cin >> points[i].x >> points[i].y;
        long long min_d = 0x3f3f3f3;
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++) {
                dx = points[i].x - points[j].x;
                dy = points[i].y - points[j].y;
                d = dx * dx + dy * dy;
                if (d < min_d) min_d = d;
            }
        printf("%.4lf\n", sqrt(min_d));
    }
    return 0;
}