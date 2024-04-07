#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    long x;
    cin >> n >> x;
    
    vector<long> p(n);
    for (long& it: p)
        cin >> it;

    sort(p.begin(), p.end());
    int cnt = 0;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (p[i] + p[j] <= x)
        {
            i++; j--;
            cnt++;
        }
        else
        {
            j--;
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}