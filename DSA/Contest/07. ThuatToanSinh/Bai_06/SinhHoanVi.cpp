#include <bits/stdc++.h>
using namespace std;

int n, a[1001], ok;

void kTao()
{
    for (int i = 0; i < n; i++)
        a[i + 1] = i + 1;
}

void in()
{
    for (int i = 0; i < n; i++)
        cout << a[i + 1];
    cout << " ";
}

void solve()
{
    cin >> n;
    kTao();
    do
    {
        in();
    } while (next_permutation(a + 1, a + n + 1));

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}