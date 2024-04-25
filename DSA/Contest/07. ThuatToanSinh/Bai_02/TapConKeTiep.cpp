#include <bits/stdc++.h>
using namespace std;

int n, k, a[1001], check[1001];

void kTao()
{
    for (int i = 0; i < k; i++)
        cin >> a[i + 1];
}

void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        --i;
    }
    if (i == 0)
    {
        for (int i = 0; i < k; i++)
        {
            a[i + 1] = i + 1;
        }
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

void in()
{
    for (int i = 0; i < k; i++)
        cout << a[i + 1] << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        kTao();
        sinh();
        in();
        cout << endl;
    }
    return 0;
}