#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
using ll = long long;


void solve()
{
    int n; cin >> n;
    priority_queue<long, vector<long>> Q;
    for (int i = 0; i < n; i++) {
        long x; cin >> x;
        Q.push(x);
    }

    ll sum = 0;
    while(Q.size() > 1) {
        long long rope1 = Q.top();
        Q.pop();
        long long rope2 = Q.top();
        Q.pop();
        sum += (rope1 + rope2);
        sum %= MOD;
        Q.push(rope1 + rope2);
    }
    cout << sum;
}

int main()
{
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}