#include <bits/stdc++.h>

using namespace std;

int n;
int a[1001];
string s;
bool ok;
long long minN = (long long)(1e9+1);

void sinh()
{
    int i = n - 1;
    while (i >= 0 && s[i] == '1')
        s[i--] = '0';
    if (i == -1)
        ok = 1;
    else
        s[i] = '1';
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    s = string(n, '0');
    ok = 0;
    while (!ok)
    {
        long long nhom1 = 0, nhom2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                nhom1 += a[i];
            else nhom2 += a[i];
        }
        minN = min(minN, (long long)abs(nhom1-nhom2));
        sinh();
    }
    cout << minN;
}