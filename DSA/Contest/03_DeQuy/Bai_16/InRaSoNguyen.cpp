#include <iostream>
#define ll long long
using namespace std;

void InThuan(ll n)
{
    if (n == 0)
        return;
    InThuan(n / 10);
    int dv = n % 10;
    cout << dv << " ";
}

void InNghich(ll n)
{
    if (n == 0)
        return;
    int dv = n % 10;
    cout << dv << " ";
    InNghich(n / 10);
}

int main()
{
    ll n;
    cin >> n;
    InThuan(n);
    cout << endl;
    InNghich(n);
    return 0;
}

