#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsPhenicNum(ll n)
{
    int cnt1 = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt1 ++;
            int cnt = 0;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
            if (cnt > 1)
                return false;
        }
    }
    if (n != 1)
        cnt1++;
    return cnt1 == 3;
}

int main()
{
    ll n;
    cin >> n;
    if (IsPhenicNum(n))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}