#include <bits/stdc++.h>
using namespace std;

int t, n, s;
vector<int> money;
int theleastMoney = -1;

void Try(int i, int sum, int cnt) 
{
    if (sum == s) 
    {
        if (theleastMoney == -1 || cnt < theleastMoney) 
            theleastMoney = cnt;
        return;
    }
    if (i >= n || sum > s) 
        return;
    Try(i + 1, sum + money[i], cnt + 1);
    Try(i + 1, sum, cnt);
}

void solve()
{
    cin >> n >> s;
    money.resize(n); // monet = vector<int>(n);
    for (int i = 0; i < n; i++)
        cin >> money[i];
    sort(money.begin(), money.end(), greater<int>());
    theleastMoney = -1;
    Try(0, 0, 0);
    cout << theleastMoney << endl;
}

int main() 
{
    cin >> t;
    while (t--) solve();
    return 0;
}
