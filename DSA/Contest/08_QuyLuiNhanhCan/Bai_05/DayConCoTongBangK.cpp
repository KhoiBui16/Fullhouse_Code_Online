#include <bits/stdc++.h>
using namespace std;

int n,k, ok, sum = 0, a[1001],check[1001], b[1001];

void Try(int i, int pos)
{
    for (int j = pos; j <= n; j++) {
        // moi lan pos tang len 1 don vi
        /* 
        */
        b[i] = a[j];
        sum += a[j];
        // neu sum = k thi in ra 
        if (sum == k) {
            for (int l = 1; l <= i; l++)
            {
                cout << b[l] << " ";
            }
            cout << endl;
        }
        else 
        {
            // chu y Try
            Try(i + 1, j + 1);
        }
        sum -= a[j];
    }
}

void solve() 
{
    cin >> n >> k;
    memset(check, 0, sizeof(check));
    // nhap mang
    for (int i = 1;i <= n; i++)
        cin >> a[i];
    // truoc khi try thi sort
    sort(a + 1, a + n + 1);
    Try(1, 1);
}

int main()
{
    int t; cin >> t;
    while (t--) solve();
    return 0;
}