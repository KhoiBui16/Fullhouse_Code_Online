/*
DisjointSet => ko có dùng ds kề
    2 thao tác: tìm và gộp
    - nếu các đỉnh ko có các cạnh nối nhau
    thì mỗi đỉnh trên đồ thị là 1 tập hợp riêng lẻ
    - ban đầu đại diện mỗi tập hợp là chính nó
    - giải sử đề bài cho đường đi giữa 2 tập hợp, tìm xem đại diện của 2 tập hợp khác nhau thì gộp lại và đại diện của tập hợp sau khi gộp (cha) sẽ là nhỏ hơn
    - kiểm tra xem tại sao là khác tập hợp => tìm và gộp nếu cùng đại diện => có chu trình
    - có 2 thao tác:
        + find (tìm)
        + union (gộp)
    - tìm xem sao có đại diện :
        + dấu hiện nhận biết khi chính nó = bằng parent

    có 2 cách:
        C1: đệ quy tìm cha => độ phức tạo O(N)
        C2: thao tác nén đường đi => quy về có đại diện lại chính nó bằng đổi hàm find - và tối ưu chọn đại diện trong gộp có 2 cách:
            + theo size
            + theo rank (bậc)
*/

#include <bits/stdc++.h>
using namespace std;

int n, m;
int parent[1001];
int Size[1001];

int findC1(int u) { // mục đích của findC1 là để tìm đại diện của 1 tập hợp
    // đệ quy để tìm ra đại diện
    if (u == parent[u])
        return u;
    return findC1(parent[u]); // quay lại để tìm tiếp thằng cha
}

int findC2_1(int u) {
    if (u == parent[u])
        return u;
    return parent[u] = findC2_1(parent[u]); // chỗ này để nén đường đi tìm được đại diện tực tiếp gán cho cha của nó luôn
}

bool Union(int u, int v) { // gộp (O(N))
    // B1: findC1
    u = findC1(u); // tìm đại diện
    v = findC1(v); // tìm đại diện
    // B2: gộp
    if (u == v) { // cùng 1 tập hợp | check chu trình
        return false;
    }
    else { // 2 tập hợp khác nhau => cho nhỏ hơn là đại diện
        //* Cách 1 gắn đại diện sẽ lâu
        // if (u < v) parent[v] = u; //* u là cha của v (đại diện)
        // else parent[u] = v;

        //* C2 tối ưu theo Size hoặc là Rank sẽ tối ưu
        if (Size[u] >= Size[v]) {
            Size[v] = u;
            Size[u] += Size[v];
        }
        else {
            Size[u] = v;
            Size[v] += Size[u];
        }
    }
}

void make() { // cho cha bằng chính nó (đại diện)
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
        Size[i] = 1; // mặc định size của mỗi đại diện đều là 1
    }
}

int main() {
    cin >> n >> m;
    make();
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v;
        Union(u, v); // chỗ này tìm và gộp
    }
    for (int i = 1; i <= n; i++) {
        cout << parent[i] << " ";
    }
    return 0;
}
