#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(long n)
{
    long temp = n;
    long rev = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    return (rev == n);
}

bool AtLeast3PrimeDivisor(long n)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n != 1)
        cnt++;
    return cnt >= 3;
}

int main()
{
    long a, b;
    cin >> a >> b;
    int check = 0;
    for (long i = a; i <= b; i++)
        if (IsPalindrome(i) && AtLeast3PrimeDivisor(i))
        {
            cout << i << " ";
            check = 1;
        }
    if (check == 0)
        cout << -1;
    return 0;
}