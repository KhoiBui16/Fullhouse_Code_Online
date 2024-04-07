#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    long k;
    cin >> k;
    vector<long> a(n), b(m);

    for (long& x: a)
        cin >> x;
    for (long& it: b)
        cin >> it;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cnt = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        while (b[j] < a[i] - k)
            j++;
        if (b[j] <= a[i] + k && j < m)
        {
            cnt++;
            j++;
        }
    }
    cout << cnt;
    
    return 0;
}