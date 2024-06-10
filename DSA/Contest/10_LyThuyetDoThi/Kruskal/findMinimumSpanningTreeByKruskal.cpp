/*
    Krusal<DSU - DisjonitSetUnion>: tìm cây khung cực tiểu hoặc cây bao trùm nhỏ nhât (minimun Spanning Tree)
    - sẽ có n đỉnh và n - 1 sao cho chi phí(trọng số) nhỏ nhất đi qua tất cả đỉnh và tốn n - 1 (lần đi)
    - Tư tưởng:
        + B1: sắp xếp các cạnh theo trọng số tăng dần (lưu bằng struct) trong vector<Weight>
        + B2: tư tưởng DSU
*/

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
using ll = long long;

typedef struct Edge
{
    int u, v, w;
}EDGE;

const int MAX = 1001;
int Size[MAX], parent[MAX], n, m;
vector<EDGE> edgeList;


int find(int u) {
    if (u = parent[u]) return u;
    return parent[u] = find(parent[u]);
}

bool Union(int u, int v) {
    u = find(u);
    v = find(v);
    if (u == v) return false;
    if (Size[u] < Size[v]) swap(u, v);
    Size[u] += Size[v];
    parent[v] = u;
    return true;
}

void Kruskal() {
    int minWeight = 0;
    sort(edgeList.begin(), edgeList.end(), [](EDGE a, EDGE b) -> bool{
        return a.w < b.w;
    });
    vector<EDGE> minSpanTree;
    for (int i = 0; i < m; i++) {
        if (minSpanTree.size() == (n - 1)) break;
        if (Union(edgeList[i].u, edgeList[i].v)) {
            minSpanTree.push_back(edgeList[i]);
            minWeight += edgeList[i].w;
        }
    }

    if (minSpanTree.size() < n - 1) {
        cout << "Do thi khong lien thong!" << endl;
    }
    else {
        cout << "Cay khung cuc tieu bang Krusal co trong so nho nhat: " << minWeight << endl;
        for (auto it : minSpanTree)
            cout << it.u << " " << it.v << " " << it.w << endl;
    }
}

void makePresent(int u) {
    parent[u] = u;
    Size[u] = 1;
}

void input() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        edgeList.push_back({u, v, w});
        makePresent(i);
    }
}

int main() {
    input();
    Kruskal();
    return 0;
}

/*
Dòng 1: nhập n, m tương ứng với số đỉnh và số cạnh của đồ thị
Với mỗi dòng Mi: nhập lần lượt u, v, w tương ứng với đỉnh bắt đầu, đỉnh kết thúc, trọng số giữa 2 đỉnh
6 8
1 2 1
1 6 2
2 3 3
2 6 1
3 4 2
3 5 2
4 5 6
4 6 8

*/
