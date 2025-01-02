#include <bits/stdc++.h>
using namespace std;
const int N = 10005;
int m, n, ans;
int order[N];
int last_time[N];
int current_step[N];
struct node {
    int id;
    int time;
} d[N][N];

int main() {
    cin >> m >> n;

    for (int i = 0; i < m * n; i++)
        cin >> order[i];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> d[i][j].id;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> d[i][j].time;

    vector<vector<pair<int, int>>> machine_schedule(m + 1);
    for (int i = 0; i < m * n; i++) {
        int now = order[i];
        int k = ++current_step[now];
        int machine = d[now][k].id;
        int time_need = d[now][k].time;
        int start_time = last_time[now];

        for (auto &i : machine_schedule[machine]) {
            if (i.first >= start_time + time_need) break;
            start_time = max(start_time, i.second);
        }
        machine_schedule[machine].push_back({start_time, start_time + time_need});
        sort(machine_schedule[machine].begin(), machine_schedule[machine].end());
        last_time[now] = start_time + time_need;
        ans = max(ans, last_time[now]);
    }
    cout << ans << '\n';
    return 0;
}