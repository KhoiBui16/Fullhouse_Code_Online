#include <bits/stdc++.h>
using namespace std;

int KthPrimeDivisor(long n, long k)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                if (cnt == k)
                    return i;
                n /= i;
                
            }
        }
    }
    if (n != 1)
    {
        cnt++;
        if (cnt == k)
        return n;
    }
        return -1;  
}

int main()
{
    long n, k;
    cin >> n >> k;
    cout << KthPrimeDivisor(n, k);    

    return 0;
}