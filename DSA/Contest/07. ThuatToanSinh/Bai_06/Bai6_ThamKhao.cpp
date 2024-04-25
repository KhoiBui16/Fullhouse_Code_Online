#include <bits/stdc++.h>

using namespace std;

int n;
vector <int> a(1001);

void Solve()
{
    cin >> n;
    for (int i=0; i<n; i++) a[i]=n-i;
    do
    {
        for (int i=0; i<n; i++) cout << a[i];
        cout << " ";
    } while (prev_permutation(a.begin(), a.begin()+n));
    cout << endl;
}

int main()
{
    int t; cin >> t;
    while (t--) Solve();
}