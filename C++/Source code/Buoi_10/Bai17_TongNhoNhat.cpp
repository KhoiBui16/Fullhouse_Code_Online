/*
    C++ Buổi 10_Bài 17.Tổng nhỏ nhất.
    Cho mảng A[] gồm các số từ 0 đến 9. Nhiệm vụ của bạn là tìm tổng nhỏ nhất của hai số được tạo bởi các số trong mảng A[]. Chú ý, tất cả các số trong mảng A[] đều được sử dụng để tạo nên hai số. Chú ý nếu bạn tạo thành các số có số 0 đứng đầu thì bạn có thể loại bỏ các số 0 vô nghĩa đó.

    Input Format
    Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i].(1≤N≤30; 0≤A[i]≤9)

    Output Format
    In ra kết quả của bài toán trên 1 dòng.

    Ví dụ:
    Dữ liệu vào:
    6
    1 2 3 4 5 6
    Dữ liệu ra:
    381
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr.begin(), arr.end());
    long sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            sum1 = sum1 * 10 + arr[i];
        else
            sum2 = sum2 * 10 + arr[i];
    }

    long res = sum1 + sum2;
    cout << res;

    return 0;
}