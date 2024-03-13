#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsFibo(ll n)
{
    if (n == 0 || n == 1)
        return true;
    ll F1 = 1, F2 = 0, Fn;
    for (int i = 3; i <= 93; i++)
    {
        Fn = F1 + F2;
        if (Fn == n)
            return true;
        F2 = F1;
        F1 = Fn;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (ll& it : arr)
        cin >> it;

    bool check = false; 
    for (ll it : arr)
        if (IsFibo(it))
        {
            check = true;
            cout << it << " ";
        }

    if (check == false)
        cout << "NONE";
    return 0;
}