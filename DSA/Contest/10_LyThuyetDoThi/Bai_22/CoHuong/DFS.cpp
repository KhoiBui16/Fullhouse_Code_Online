//* bài toán tô màu để kt chu trình
/* 
- thuật toán cũ DFS bằng mảng 3 màu để kiểm tra đường đi
- đồ thị có 3 mảu
0: trắng - chưa thăm
1: xám - đang thăm
2: đen - thăm xong
 */
#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
int color[1001];

bool DFS(int u) {
    color[u] = 1; // mau xam
    for (int v : adj[u]) {
        if (color[v] == 0) {
            if (DFS(v) == true)
                return true;
        }
        else if (color[v] == 1) // mau xam la to tien
            return true;
    }
    color[u] = 2; // mau den
}

int main()
{
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++) {
        if (color[i] == 0) {
            if (DFS(i) == true) {
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0;
    return 0;
}