#include <bits/stdc++.h>
using namespace std;

struct JOB
{
    int id;
    int deadline;
    int profit;
};

bool cmp(JOB a, JOB b) { return a.profit > b.profit; }
bool done[1000001];

void solve()
{
    int n; cin >> n;
    vector<JOB> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i].id >> a[i].deadline >> a[i].profit;
    sort(a.begin(), a.end(), cmp);
    long long sum = 0;
    for (JOB it : a) {
        for (int i = it.deadline; i >= 1; i--) {
            if (done[i] == false) {
                sum += it.profit;
                done[i] = true;
                break;
            }
        }
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