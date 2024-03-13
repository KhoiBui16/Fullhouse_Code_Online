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

int main()
{
    int n;
    cin >> n;
    map<int, long> mp;
    vector<long> arr(n);
    for (long& it : arr)   
    {
        cin >> it; 
        mp[it]++;
    }

    for (long it : arr)
    {
        if (IsPrime(it) && mp[it] != 0)
        {
            cout << it << " " << mp[it] << endl;
            mp[it] = 0;
        }
    }

    return 0;
}