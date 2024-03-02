#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsPrime(ll n)
{
    if (n < 2)  
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

ll SumOfDigits(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

ll SumOfPrimeDivisors(ll n)
{
    ll sum = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
            while (n % i == 0)
            {
                sum += SumOfDigits(i);
                n /= i;
            }    
    }
    if (n != 1)
        sum += SumOfDigits(n);
    return sum;
}

int main()
{
    ll n;
    cin >> n;
    if (!IsPrime(n) && (SumOfDigits(n) == SumOfPrimeDivisors(n)))
        cout << "YES";
    else
        cout << "NO";

    return 0;    
}