#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k; cin >> k;
    string s;
    cin.ignore();
    getline(cin, s);
    priority_queue<int> q; // max heap
    map<char, int> mp;
    for (char x : s) 
        mp[x]++;
    for (auto it : mp)
        q.push(it.second);
    while (k != 0) {
        int tmp = q.top();
        q.pop();
        tmp--;
        q.push(tmp);
        k--;
    }
    long long sum = 0;
    while (!q.empty()) {
        int tmp = q.top();
        sum += (long long)tmp * tmp;
        q.pop();
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