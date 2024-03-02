#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int main()
{
    int test;
    cin >> test;
    ll cnt = 1;
    while (test--)
    {
        int p, e;
        cin >> p >> e;
        cnt = (cnt % MOD) * (e + 1) % MOD;
        cnt %= MOD;
    }
    cout << cnt;
    return 0;
}

// xài công thức tính ước của 1 số bằng cách phân tích thành cách thừa số nguyên tố