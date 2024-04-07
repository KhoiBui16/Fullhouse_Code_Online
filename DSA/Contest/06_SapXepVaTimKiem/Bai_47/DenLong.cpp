#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long length;
    cin >> length;

    vector<long> a(n);
    for (long& x : a)
        cin >> x;
    
    sort(a.begin(), a.end());
    long max_distance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        max_distance = max(max_distance, a[i + 1] - a[i]);
    }
    float d = max_distance * 1.0 / 2;
    cout << fixed << setprecision(10) << d;

    return 0;
}