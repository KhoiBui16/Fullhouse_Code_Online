#include <bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;

// áp dụng công thức tính ước của 1 số thông qua pttsnt và công thức legendre để tính số bậc của N!

int degree1(int n, int p)
{
    int ans = 0;
    for (int i = p; i <= n; i += p)
    {
        int temp = i;
        while (temp % i == 0)
        {
            ans++;
            temp /= p;
        }
    }
    return ans;
}

// công thức legendre
int degree2(int n, int p)
{
    int ans = 0;
    for (int i = p; i <= n; i *= p)
    {
        ans += n / i;
    }
    return ans;
}

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

ll CountDivisorOfFactorial(int n)
{
    ll res = 1;
    for (int i = 1; i <= n; i++)
    {
        if (IsPrime(i)) 
        {
            res = (res % MOD) * (degree2(n, i) + 1) % MOD;
            res %= MOD;
        }
    }

    return res;
}

int main()
{
    int n;
    cin >> n;
    ll result = CountDivisorOfFactorial(n);
    cout << result;
    return 0;
}