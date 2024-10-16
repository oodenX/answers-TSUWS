#include <bits/stdc++.h>
using namespace std;
int n, e;
bool vis[105];
typedef struct
{
    int n;
    int e;
    char data[500];
    int edge[500][500];
} Graph;

typedef struct
{
    int index;
    int cost;
} mincost;

typedef struct
{
    int x;
    int y;
    int weight;
} EDGE;

typedef struct
{
    int index;
    int flag;
} F;

void create(Graph &G, int n, int e)
{
    int i, j, k, w;
    char a, b;
    for (i = 0; i < n; i++)
        cin >> G.data[i];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (i == j)
                G.edge[i][j] = 0;
            else
                G.edge[i][j] = 100;
        }

    for (k = 0; k < e; k++)
    {
        cin >> a;
        cin >> b;
        cin >> w;
        for (i = 0; i < n; i++)
            if (G.data[i] == a)
                break;
        for (j = 0; j < n; j++)
            if (G.data[j] == b)
                break;

        G.edge[i][j] = w;
        G.edge[j][i] = w;
    }
    G.n = n;
    G.e = e;
}
// 从这里开始写，把头文件改成万能头,在全局变量加上个vis[105],把局部变量的n和e移动到全局变量
struct Edge {
    int from, to, weight;
    Edge(int f, int t, int w) : from(f), to(t), weight(w) {}
    bool operator<(const Edge &e) const {
        return weight > e.weight;
    }
};
void Prim(Graph &G, int u) {
    priority_queue<Edge> pq;
    vis[u] = true;
    for (int i = 0; i < n; i++) {
        if (G.edge[u][i] != 100) pq.push(Edge(u, i, G.edge[u][i]));
    }
    while (!pq.empty()) {
        Edge e = pq.top();
        pq.pop();
        if (vis[e.to]) continue;
        vis[e.to] = true;
        cout << "(" << G.data[e.from] << "," << G.data[e.to] << ")";
        for (int i = 0; i < n; i++) {
            if (G.edge[e.to][i] != 100 && !vis[i]) pq.push(Edge(e.to, i, G.edge[e.to][i]));
        }
    }
}
// 这里结束
int main()
{
    Graph my;
    cin >> n >> e;
    create(my, n, e);
    Prim(my, 0);
    return 0;
}