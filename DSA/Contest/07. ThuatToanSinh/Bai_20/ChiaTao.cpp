#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int n, a[1001], ok;
string s;

long long Min = 1e9 + 1;

void Sinh() // chua hieu ham sinh chia tao
{
    int i = n - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = 0;
        i--;
    }
    // kiem tra
    if (i == -1)
        ok = 1;
    else
        s[i] = '1';
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // ham khoi tao
    s = string(n, '0');
    ok = 0;
    while (ok == 0)
    {
        long long nhom1 = 0, nhom2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                nhom1 += a[i]; 
            else
                nhom2 += a[i];
        }
        Min = min(Min, (long long)abs(nhom1 - nhom2));
        Sinh();
    }
    cout << Min;
    return 0;
}