#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsSquareNumber(ll n)
{
    ll squareRoot = sqrt(n);
    return squareRoot * squareRoot == n;
}

int main()
{
    ll n;
    cin >> n;
    if (IsSquareNumber(n))
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}