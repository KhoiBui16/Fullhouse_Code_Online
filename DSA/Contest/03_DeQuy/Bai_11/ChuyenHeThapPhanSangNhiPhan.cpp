#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Bin(ll n)
{
    if (n == 0)
        return;
    Bin(n / 2);
    cout << n % 2;
}

int main()
{
    ll n;
    cin >> n;
    Bin(n);
    return 0;
}