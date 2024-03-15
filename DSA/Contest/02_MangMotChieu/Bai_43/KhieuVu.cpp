#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nam(n), nu(m);
    for (int& it : nam)
        cin >> it;
    for (int& it : nu)
        cin >> it;
    sort(nam.begin(), nam.end());
    sort(nu.begin(), nu.end());
    long count = 0;
    int lc = nu[0];
    int j = 0;
    for (int i = 0; i < n; i++)
        if (nam[i] > lc)
        {
            count++;
            j++;
            lc = nu[j];
        }
    cout << count;
    return 0;
}