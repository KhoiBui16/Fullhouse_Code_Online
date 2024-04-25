#include <bits/stdc++.h>
using namespace std;

long n, a[1001], check[1001], ok;

void kTao()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void xuat()
{
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
}

void sinh()
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        --i;
    if (i == 0)
    {
        sort(a + 1, a + n + 1);
        xuat();
    }
    else
    {
        int j = n;
        while (a[i] > a[j])
        {
            --j;
        }
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while (l < r)
        {
            swap(a[l], a[r]);
            l++;
            r--;
        }
        xuat();
    }
}

int main() // van sai 3/ 6 test
{
    int t;
    cin >> t;
    while (t--)
    {
        kTao();
        sinh();
        cout << endl;
    }

    return 0;
}