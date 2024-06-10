#include <bits/stdc++.h>
#define MAXC 100
#define MAXR 100
using namespace std;

int t, n;
int a[MAXR][MAXC];
bool visited[MAXR][MAXC];
string s = "";

void Try(int i, int j)
{
    if (i == n && j == n) {
        cout << s << " ";
    }

    /*
    //*uu tien di hang D
        truoc khi huong down thi phai kiem tra d == 1 va van phai nam trong me cung
        khong so di bi lap lai vong tron => khong can danh dau nhung van danh dau cho quen
    //* sau do moi di R
    */
    if (i + 1 <= n && a[i + 1][j] == 1) {
        s += "D";
        a[i + 1][j] = 0; //* tranh tuong hop di lai thi danh dau lai duong da di do lai
        Try(i + 1, j); //* vi di xuong D
        a[i + 1][j] = 1;
        s.pop_back();
    }
    if (j + 1 <= n && a[i][j + 1] == 1) {
        s += "R";
        a[i][j  + 1] = 0; //* tranh tuong hop di lai thi bit duong do lai
        Try(i, j + 1); //* vi di xuong D
        a[i][j + 1] = 1;
        s.pop_back();
    }
}

void solve()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    Try(1, 1);
    cout << endl;
}

int main()
{
    cin >> t;
    while (t--)
        solve();
    return 0;
}
