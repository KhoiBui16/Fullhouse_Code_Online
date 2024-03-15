#include <bits/stdc++.h>
using namespace std;

long long sumArr(vector<int> arr)
{
    long long sum = 0;
    for (int x : arr)
        sum += x;
    return sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int& it : arr)
        cin >> it;
    
    vector<int> subArr;
    vector<int> maxSubArr;
    subArr.push_back(arr[0]);
    long maxLen = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            subArr.push_back(arr[i]);
        }
        else
        {
            if (subArr.size() > maxLen || (subArr.size() == maxLen && sumArr(subArr) > sumArr(maxSubArr)))
            {
                maxSubArr.assign(subArr.begin(), subArr.end());
                maxLen = subArr.size();
            }

            subArr.clear();
            subArr.push_back(arr[i]);
        }
    }

    // xử lý dãy con cuối cùng
    if (subArr.size() > maxLen || ((subArr.size() == maxLen) && sumArr(subArr) > sumArr(maxSubArr)))
    {
        maxSubArr.assign(subArr.begin(), subArr.end());
    }

    cout << maxSubArr.size() << endl;
    for (int x : maxSubArr)
        cout << x << " ";
}