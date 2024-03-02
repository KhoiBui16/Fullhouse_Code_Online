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

bool IsPerfectPrime(int n)
{
    long sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit != 2 && digit != 3 && digit != 5 && digit != 7)
            return false;
        else
            sum += digit;
        n /= 10;
    }
    return IsPrime(sum);

}

int main()
{
    long a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
        if (IsPerfectPrime(i) && IsPrime(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}