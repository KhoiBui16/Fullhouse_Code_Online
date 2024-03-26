#include <bits/stdc++.h>
#define ll long long
using namespace std;

void Hex(ll n)
{
    if (n == 0)
        return;
    Hex(n / 16);
    int ans = n % 16;
    if (ans == 10)
        cout << "A";
    else if (ans == 11)
        cout << "B";
    else if (ans == 12)
        cout << "C";
    else if (ans == 13)
        cout << "D";
    else if (ans == 14)
        cout << "E";
    else if (ans == 15)
        cout << "F";
    else
        cout << ans;
}

int main()
{
    ll n;
    cin >> n;
    Hex(n);

    return 0;
}