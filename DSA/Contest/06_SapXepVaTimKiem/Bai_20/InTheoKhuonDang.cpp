#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }        
    
    sort(arr.begin(), arr.end()); // Sắp xếp tăng dần

    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[n - 1 - i] << " " << arr[i] << " ";
    }

    if (n % 2 == 1)
        cout << arr[n / 2];
    
    return 0;
}