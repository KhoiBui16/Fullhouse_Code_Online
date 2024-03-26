#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll SumOfOddNum(ll n)
{
    if (n < 10)
    {
        if (n % 2 != 0)
            return n;
        else
            return 0;
    }
    int digit = n % 10;
    if (digit % 2 != 0)
        return digit + SumOfOddNum(n / 10);
    return SumOfOddNum(n / 10);
}

ll SumOfEvenNum(ll n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
            return n;
        else
            return 0;
    }
    int digit = n % 10;
    if (digit % 2 == 0)
        return digit + SumOfEvenNum(n / 10);
    return SumOfEvenNum(n / 10);
}

int main()
{
    ll n;
    cin >> n;
    ll even = SumOfEvenNum(n);
    ll odd = SumOfOddNum(n);
    cout << even << "\n" << odd;
    return 0;
}