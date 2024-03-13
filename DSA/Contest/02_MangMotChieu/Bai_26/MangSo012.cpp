#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;
    vector<int> arr(n);
    for (int& it : arr)
        cin >> it;
    sort(arr.begin(), arr.end());
    for(int it : arr)
        cout << it << " ";
    return 0;
}