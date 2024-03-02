#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsSquareNum(ll n)
{
    ll SquareRoot = sqrt(n);
    return (SquareRoot * SquareRoot == n);
}

int main()
{
    ll n;
    cin >> n;
    if (IsSquareNum(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}