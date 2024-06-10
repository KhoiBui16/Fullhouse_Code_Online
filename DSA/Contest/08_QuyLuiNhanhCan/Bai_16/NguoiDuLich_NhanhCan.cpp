#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, c[105][105], x[100];
int visited[105];
int d = 0, ans = INT_MAX, cMin = INT_MAX;

void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
            if (c[i][j] != 0) { // tim ra chi phi min cua trong so tu dinh nay den dinh kia
                cMin = min(c[i][j], cMin); // quan trong nhat cua nhanh can
            }
        }
    }
    memset(visited, 0, sizeof(visited));
}

void Try(int i)
{
    for (int j = 2; j <= n; j++) {
        if (visited[j] == 0) {
            visited[j] = 1;
            x[i] = j;
            d +=  c[x[i - 1]][x[i]];
            if (i == n)
                ans = min(ans, d + c[x[n]][1]);
            else if (d + (n - i + 1) * cMin) { // dieu kien cua nhanh can de tim ra cau hinh tim nang de giam bot vong lap
                Try(i + 1);
            }
            visited[j] = 0;
            d -= c[x[i - 1]][x[i]];
        }
    }
}

int main()
{
    init();
    x[1] = 1;
    visited[1] = 1;
    Try(2);
    cout << ans << endl;
    return 0;
}