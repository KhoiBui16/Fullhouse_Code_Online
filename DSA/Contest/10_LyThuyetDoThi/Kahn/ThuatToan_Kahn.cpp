#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

/*  
    - Thuat toan Kahn (xoa dần đỉnh) chi quan tam den KEYWORD(BÁN BẬC VÀO) cua cac dinh trong do thi co huong (ung dung BFS)
    => ỨNG DỤNG: TÌM RA THỨ TỰ TOPO TRONG ĐỒ THỊ CÓ HƯỚNG => CHECK ĐỒ THỊ CÓ CHU TRÌNH HAY KHÔNG
    - Dem ban bac vao cua do thi co huong
    - Tao mang de luu cac ban bac vao 
    - B1: (ƯU TIÊN)kiem tra xem dinh nao co BÁN BẬC VÀO = 0 -> luu vao hqueue truoc
    - B2: lay dinh U ra khoi queue va xoa dinh do di (THĂM)
    - B3: duyet tiep theo nhung dinh ke voi dinh U va giam ban bao vao cua cac dinh ke 1 don vi
    - B4: va nhung dinh ke sau khi giam co ban bac vao = 0 -> push vao queue
    - B5: duyet het dinh ket lap lai B1:

*/
/*  
    - TEST CASE DANH SACH CANH
input:
10 10
8 9
9 10
1 2
2 3
2 4
3 5
1 6
6 7
6 4
7 5

output:
1 8 2 6 9 3 4 7 10 5
*/


void BFS(int n, vector<vector<int>> adj, vector<int>& deg, vector<int>& Kahn)
{
    queue<int> q;
    // ưu tiên đẩy những đỉnh có bán bậc vào bằng 0 vào hàng đợi trước
    for (int i = 1; i <= n; i++)
    {
        if (deg[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        Kahn.push_back(u);
        for (int v : adj[u])
        {
            deg[v]--;
            if (deg[v] == 0)
                q.push(v);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjList(n + 1);
    vector<int> deg(n + 1, 0); // mang luu BÁN BẬC VÀO
    vector<int> Kahn;
    while (m--) // dau danh sach canh -> danh sach ke
    {
        int u, v;
        cin >> u >> v; // có đường đi tư u -> thì bán bậc vào của v sẽ tăng lên 1 đơn vị
        adjList[u].push_back(v);
        deg[v]++;
    }
    for (int i = 1; i <= n; i++)
        sort(adjList[i].begin(), adjList[i].end());
    BFS(n, adjList, deg, Kahn);
    for (int it : Kahn) // in ra thứ tự topo
        cout << it << " ";
    return 0;
}