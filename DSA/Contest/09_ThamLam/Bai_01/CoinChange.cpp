#include <bits/stdc++.h>
using namespace std;

void greedy(int value, int coins[], int& minCount)
{
    for (int i = 0; i < 10; i++) {
        if (coins[i] <= value) {
            minCount += value / coins[i];
            value %= coins[i];
        }
    }
}

void solve()
{
    long n;
    cin >> n;
    int coins[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int minCount = 0;
    greedy(n, coins, minCount);
    cout << minCount << endl;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}