#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    
    for (long long& x : a)
        cin >> x;

    sort(a.begin(), a.end());

    long long max_milk_product = 0;
    long long count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > count)
        {
            max_milk_product += a[i] - count;
            count++;
        }
    }
    cout << max_milk_product;

    return 0;
}