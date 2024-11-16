#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int t, n;
struct Point {
    int x, y;
    bool operator<(const Point &p) const {
        return x < p.x || (x == p.x && y < p.y);
    }
};
long long cross(const Point &O, const Point &A, const Point &B) {
    return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}
vector<Point> convexHull(vector<Point> &P) {
    int n = P.size(), k = 0;
    vector<Point> H(2 * n);
    sort(P.begin(), P.end());
    for (int i = 0; i < n; i++) {
        while (k >= 2 && cross(H[k - 2], H[k - 1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }
    for (int i = n - 2, t = k + 1; i >= 0; i--) {
        while (k >= t && cross(H[k - 2], H[k - 1], P[i]) <= 0) k--;
        H[k++] = P[i];
    }
    H.resize(k - 1);
    return H;
}
double polygonArea(const vector<Point> &p) {
    long long area = 0;
    int n = p.size();
    for (int i = 0; i < n; i++) {
        area += p[i].x * p[(i + 1) % n].y - p[i].y * p[(i + 1) % n].x;
    }
    return fabs(area) / 2.0;
}
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        vector<Point> points(n);
        for (int i = 0; i < n; i++) {
            cin >> points[i].x >> points[i].y;
        }
        if (n < 3) {
            cout << "0.0" << '\n';
            continue;
        }
        vector<Point> hull = convexHull(points);
        double area = polygonArea(hull);
        printf("%.1f\n", area);
    }
    return 0;
}