#include <bits/stdc++.h>
using namespace std;

bool IsPrime(long n)
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
    long arr[n];
    for (long& it : arr)
        cin >> it;

    long count = 0;
    for (long it : arr)
        if (IsPrime(it))
            count++;

    if (count != 0)
        cout << count;    
    else
        cout << "NONE";
    return 0;
}