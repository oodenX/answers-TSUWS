#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

struct Point {
    int x1, y1, x2, y2;
    Point(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0) : x1(x1), y1(y1), x2(x2), y2(y2) {}
    void read() { cin >> x1 >> y1 >> x2 >> y2; }
} point[15];

int link[20][20];

int cross(int x1, int y1, int x2, int y2) {
    return x1 * y2 - x2 * y1;
}

bool intersection(Point A, Point B) {
    if (max(A.x1, A.x2) < min(B.x1, B.x2) || max(A.y1, A.y2) < min(B.y1, B.y2) ||
        max(B.x1, B.x2) < min(A.x1, A.x2) || max(B.y1, B.y2) < min(A.y1, A.y2))
        return false;
    int c1 = cross(A.x2 - A.x1, A.y2 - A.y1, B.x1 - A.x1, B.y1 - A.y1);
    int c2 = cross(A.x2 - A.x1, A.y2 - A.y1, B.x2 - A.x1, B.y2 - A.y1);
    int c3 = cross(B.x2 - B.x1, B.y2 - B.y1, A.x1 - B.x1, A.y1 - B.y1);
    int c4 = cross(B.x2 - B.x1, B.y2 - B.y1, A.x2 - B.x1, A.y2 - B.y1);
    return c1 * c2 <= 0 && c3 * c4 <= 0;
}

void makeTable(int n) {
    memset(link, 0, sizeof(link));
    for (int i = 1; i <= n; ++i) {
        link[i][i] = 1;
        for (int j = i + 1; j <= n; ++j) {
            if (intersection(point[i], point[j])) {
                link[i][j] = link[j][i] = 1;
            }
        }
    }
    for (int k = 1; k <= n; ++k) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (link[i][k] && link[k][j]) link[i][j] = 1;
            }
        }
    }
}

int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; ++i) point[i].read();
        makeTable(n);
        int a, b;
        while (cin >> a >> b && (a || b)) {
            cout << (link[a][b] ? "CONNECTED" : "NOT CONNECTED") << endl;
        }
    }
    return 0;
}
