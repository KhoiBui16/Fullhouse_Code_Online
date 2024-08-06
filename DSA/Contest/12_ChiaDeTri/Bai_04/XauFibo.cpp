#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fibo[93];

void Fibo()
{
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 92; i++)
        fibo[i] = fibo[i - 2] + fibo[i - 1];
}

char check(ll n, ll k)
{
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (k <= fibo[n - 2])
        return check(n - 2, k);
    else
        return check(n - 1, k - fibo[n - 2]);
}

int main()
{
    Fibo();
    ll n, k;
    cin >> n >> k;
    cout << check(n, k);
    return 0;
}
