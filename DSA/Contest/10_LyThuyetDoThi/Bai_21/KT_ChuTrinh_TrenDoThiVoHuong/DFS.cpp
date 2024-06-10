// /* 
//     Tư tưởng: duyệt DFS kiểm tra chu trình bằng cạnh ngược: từ đỉnh cháu có đường đi đến tổ tiên khi xét những cạnh kề
//     - đỉnh bắt đầu có cha là chính nó
//     - mỗi 1 đỉnh gọi đệ quy sẽ lưu 2 thứ:
//         + đỉnh hiện tại và đỉnh cha sinh trực tiếp ra nó
//     //* của bài 21 kiểm tra độ thị vô hướng 
//     //* nếu có nhiều thanh phần liên thông phải check chu trình
//  */
// #include <bits/stdc++.h>
// using namespace std;

// int n, m;
// vector<int> adj[1001];
// bool visited[1001];

// bool DFS(int u, int parent) {
//     visited[u] = true;
//     for (int v : adj[u]) { 
//         if (visited[v] == false) {
//             if (DFS(v, u) == true)
//                 return true;
//         }
//         else if (v != parent)
//             return true;
//     }
//     return false;
// }

// int main()
// {
//     cin >> n >> m;
//     while (m--) {
//         int u, v;
//         cin >> u >> v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     for (int i = 1; i <= n; i++) {
//         sort(adj[i].begin(), adj[i].end());
//     }
//     memset(visited, false, sizeof(visited));
//     //* duyệt từng thành phần liên thông
//     for (int i = 1; i <= n; i++) {
//         if (visited[i] == false) //* là 1 thành phần liên thông
//         {
//             if (DFS(i, i) == true) {
//                 cout << 1;
//                 return 0;
//             }
//         }
//     }
//     cout << 0; // không có chu trình
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];

bool DFS(int u, int parent) {
    visited[u] = true;
    for (int v : adj[u]) { 
        if (visited[v] == false) {
            if (DFS(v, u) == true)
                return true;
        }
        else if (v != parent)
            return true;
    }
    return false;
}

int main()
{
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }
    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= n; i++) {
        if (visited[i] == false) 
        {
            if (DFS(i, i) == true) {
                cout << 1;
                return 0;
            }
        }
    }
    cout << 0; 
    return 0;
}