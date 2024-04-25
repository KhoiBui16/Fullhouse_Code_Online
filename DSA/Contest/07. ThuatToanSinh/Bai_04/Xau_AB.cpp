#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void kTao()
{
    for (int i = 0; i < n; i++)
        s += 'A';
}

void sinh() // chua hieu ro quy luat cach sinh nay
{
    int i = n - 1;
    while (i >= 1 && s[i] == 'B')
    {
        s[i] = 'A';
        i--;
    }
    if (i == -1)
        return;
    else
        s[i] = 'B';
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        kTao();
        // cho for nay ko hieu
        for (int i = 1; i <= (1 << n); i++)
        {
            cout << s << " ";
            sinh();
        }
        s = "";
        cout << endl;
    }
    return 0;
}