#include <bits/stdc++.h>
using namespace std;

bool IsPrime(long n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

bool MaxLastDigit(long n)
{
    int LastDigit = n % 10;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit > LastDigit)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    long n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (MaxLastDigit(i) && IsPrime(i))
        {
            cout << i << " ";
            cnt++;
        }
    }
    cout << "\n" << cnt;
    return 0;
}