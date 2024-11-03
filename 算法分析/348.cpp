#include <bits/stdc++.h>
using namespace std;
vector<tuple<int, int, int>> v;
int m, n, k, cur_x, cur_y, pre_x, pre_y, ans, mp[25][25];
bool cmp(tuple<int, int, int> a, tuple<int, int, int> b) {
    return get<0>(a) > get<0>(b); // 按照第一个元素降序排序
}
int main() {
    cin >> m >> n >> k;
    k -= 2;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
            if (mp[i][j]) v.push_back(make_tuple(mp[i][j], i, j));
        }
    }
    sort(v.begin(), v.end(), cmp);
    pre_x = get<1>(v[0]), pre_y = 1;
    for (auto t : v) {
        if (!k) break;
        cur_x = get<1>(t), cur_y = get<2>(t);
        k -= abs(cur_x - pre_x) + abs(cur_y - pre_y) + 1, ans += get<0>(t);
        }
    cout << ans << '\n';
    return 0;
}