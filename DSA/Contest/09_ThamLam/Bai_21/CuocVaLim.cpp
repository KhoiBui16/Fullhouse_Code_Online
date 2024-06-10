#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve()
{
    long aCoins, bDiamonds;
    cin >> aCoins >> bDiamonds;
    if (aCoins < 3 && bDiamonds < 3) return 0;
    int res = 0;
    aCoins -= 3; bDiamonds -= 3;
    res += 2; // mac dinh co 1 cuoc va 1 liem
    int minn = min(aCoins, bDiamonds);
    int maxx = max(aCoins, bDiamonds);

    if ((maxx / minn) < 2) res += (2 * minn - maxx) / 2;
    else res += minn;
    
    return res;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout << solve();
    return 0;
}