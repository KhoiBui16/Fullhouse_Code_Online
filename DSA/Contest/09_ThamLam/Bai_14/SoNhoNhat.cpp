#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isValid(int d, int s)
{
    if (d * 9 < s)
        return false;
    return true;
}

void solve()
{
    int s, d; cin >> s >> d;
    if (isValid(d, s)) 
    {
        int a[d];
        s--;
        for (int i = d - 1; i >= 0; i--) {
            if (s > 9) {
                a[i] = 9;
                s -= 9;
            }
            else {
                a[i] = s;
                s = 0;
            }
        }
        a[0] = 1 + s;
        for (int x : a) cout << x;
    } 
    else cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}