#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n / 2; i++)
        if (IsPrime(i) && IsPrime(n - i))
            cout << i << " " << (n - i) << endl;
    return 0;
}