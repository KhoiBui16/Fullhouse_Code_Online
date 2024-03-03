#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsPrime(long n)
{
    if (n < 2)
        return false;
    for (long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    long n;
    cin >> n;
    if (IsPrime(n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
