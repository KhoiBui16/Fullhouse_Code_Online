#include <bits/stdc++.h>
#define ll long long
using namespace std;


bool IsFibo(ll n)
{
    ll F0 = 0, F1 = 1, Fn;
    if (n == 0 || n == 1)
        return true;
    for (int i = 3; i <= 93; i++)
    {
        Fn = F0 + F1;
        F0 = F1;
        F1 = Fn;
        if (Fn == n)
            return true;
    }
    return false;
}

int main()
{
    ll n;
    cin >> n;
    if (IsFibo(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
