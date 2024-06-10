#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int n, dmax = -1, sum = 0;
int col[MAX], d1[MAX], d2[MAX], x[MAX], a[10][10];

void Try(int i)
{
    for (int j = 1; j <= n; j++) {
        if (col[j] == 0 && d1[i + j - 1] == 0 && d2[i - j + n] == 0) {
            x[i] = j;
            col[j] = 1;
            d1[i + j - 1] = 1;
            d2[i - j + n] = 1;
            if (i == n)
            {
                for (int k = 1; k <= n; k++)
                    sum += a[k][x[k]];
                dmax = max(dmax, sum);
                sum = 0;
            }
            else Try(i + 1);
            col[j] = 0;
            d1[i + j - 1] = 0;
            d2[i - j + n] = 0;

        }
    }
}

void solve()
{
    n = 8;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    memset(col, 0, sizeof(col));
    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
    dmax = 0, sum = 0;
    Try(1);
    cout << dmax << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}