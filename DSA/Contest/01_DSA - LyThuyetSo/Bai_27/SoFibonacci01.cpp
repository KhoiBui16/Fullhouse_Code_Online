#include <bits/stdc++.h>
#define ll long long
using namespace std;


ll fibo(int n)
{
    ll F1 = 0, F0 = 1, Fn;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    for (int i = 3; i <= n; i++)
    {
        Fn = F1 + F0;
        F1 = F0;
        F0 = Fn;
    }
    return Fn;

}

int main()
{
    ll n;
    cin >> n;
    cout << fibo(n);
    return 0;
}