#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int left = 0, right = n / 2, count = 0;
    while (left < n / 2 && right < n)
    {
        if (a[right] >= 2 * a[left])
        {
            count++;
            left++;
        }
        right++;
    }
    cout << n - count << endl;
    return 0;
}
