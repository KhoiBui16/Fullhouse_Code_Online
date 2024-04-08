#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    long long sumMin = 1;

    // sử dụng thuật toán greedy
    // ý tưởng sử dụng biến sumMin để theo dõi tổng nhỏ nhất
    // thêm các giá trị arr[i] nếu sum + 1 nhỏ hơn hoặc bằng với arr[i]
    // nếu không thì sumMin đó sẽ là tổng nhỏ nhất
    for (int i = 0; i < n && arr[i] <= sumMin; i++)
        sumMin += arr[i];
    cout << sumMin;
    return 0;
}