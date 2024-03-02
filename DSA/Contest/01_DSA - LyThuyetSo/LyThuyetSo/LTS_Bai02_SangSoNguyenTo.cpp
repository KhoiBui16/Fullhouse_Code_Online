#include <bits/stdc++.h>
using namespace std;

int prime[10000000] = {0};
void sieve()
{
    prime[0] = prime[1] = 1;
    for (int i = 2; i <= sqrt(10000000); i++)
        if (prime[i] == 0)
            for (int j = i * i; j <= 10000000; j += i)
                prime[j] = 1;
}

int main()
{
    long n;
    cin >> n;
    sieve();
    for (int i = 2; i < n; i++)
        if (prime[i] == 0)
            cout << i << " ";
    return 0;
}