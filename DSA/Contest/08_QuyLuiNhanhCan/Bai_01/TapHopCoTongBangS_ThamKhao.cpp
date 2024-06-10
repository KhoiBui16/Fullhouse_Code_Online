#include <bits/stdc++.h>

using namespace std;

int n, k, s, ok = 0, cnt = 0;
vector <int> a(21);


void ktao()
{
    for (int i=1; i<=k; i++) a[i] = i;
}

void Try()
{
    int tmp = 0;
    for (int j=1; j<=k; j++) tmp += a[j];
    if (tmp == s) cnt++;
    int i = k;
    while (i >= 1 && a[i] == n-k+i) i--;
    if (!i) ok = 1;
    else
    {
        a[i]++;
        for (int j=i+1; j<=k; j++) a[j] = a[j-1] + 1;
    }
}


int main()
{
    while (1)
    {
        cin >> n >> k >> s;
        if (!n && !k && !s) break;
        else if (n < k) cout << 0 << endl;
        else
        {
            ktao();
            while (!ok) Try();
            cout << cnt << endl;
            ok = 0;
            cnt = 0;
        }
    }
    
}