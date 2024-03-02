#include <bits/stdc++.h>
using namespace std;

long MaxPrimeDivisor(long n)
{
    long max = 2;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i > max)
                max = i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n != 1)
        if (n > max)
            max = n;
    return max;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        long n;
        cin >> n;
        cout << MaxPrimeDivisor(n) << endl;
    }
    return 0;
}