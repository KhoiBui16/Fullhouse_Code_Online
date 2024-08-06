#include <bits/stdc++.h>
using namespace std;

int LIS(vector<int>& dp, vector<int> a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] > a[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
    }
    return *max_element(dp.begin(), dp.end());
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> dp(n, 1);
    int minInsertion = n - LIS(dp, a, n);
    cout << minInsertion;
    return 0;
}


/*
    Cho mảng A[] gồm N số nguyên.
    Nhiệm vụ của bạn là sắp xếp lại mảng số với số lượng bước là ít nhất.
    Tại mỗi bước, bạn chỉ được phép chèn phần tử bất kỳ của mảng vào vị trí bất kỳ trong mảng.
    Ví dụ A[] = {2, 3, 5, 1, 4, 7, 6 }sẽ cho ta số phép chèn ít nhất là 3 bằng cách lấy số 1 chèn trước số 2, lấy số 4 chèn trước số 5, lấy số 6 chèn trước số 7 ta nhận được mảng được sắp.

    - Ý tưởng ở đây tôi sẽ dùng quy hoạch đồng tìm dãy con tăng dài nhất - LIS (đã sắp xếp tăng dần trong quá trình tìm)
    - số bước chèn tối thiếu thì sẽ lấy độ dài mảng trừ cho LIS = số vị trí còn thiếu cần chèn phù hợp
*/
