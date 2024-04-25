#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a(1005);

void Solve()
{
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    if (next_permutation(a.begin() + 1, a.begin()+n+1)) 
    {
        for (int i=1; i<=n; i++) cout << a[i] << " ";
    }
    else 
    {
        sort (a.begin()+1, a.begin()+n+1);
        for (int i=1; i<=n; i++) cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) Solve();
}