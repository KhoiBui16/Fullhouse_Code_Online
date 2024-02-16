/*
    C++ Buổi 10_Bài 13.Tuyến BRT.
    Thành phố X có N thị trấn trên trục đường chính. Tọa độ của các thị trấn lần lượt là a[1],a[2], …, a[N], các tọa độ này là phân biệt, không có 2 tọa độ nào trùng nhau. Chính quyền thành phố muốn xây dựng một tuyến buýt nhanh BRT để kết nối 2 thị trấn gần nhau nhất với nhau. Bạn hãy tính thử xem chiều dài của tuyến buýt này bằng bao nhiêu? Và có bao nhiêu cặp thị trấn có tiềm năng giống nhau để xây dựng tuyến BRT này.

    Input Format
    Dòng đầu tiên là số nguyên N (N ≤ 1000 000). Dòng tiếp theo gồm N số nguyên A[i].(N ≤ 1000 000;-10^9 ≤ A[i] ≤ 10^9)

    Output Format
    In ra 2 số nguyên C và D, lần lượt là khoảng cách ngắn nhất giữa 2 thị trấn, và số lượng cặp thị trấn có cùng khoảng cách ngắn nhất này.

    Ví dụ:
    Dữ liệu vào:
    5
    5 -3 1 4 0
    Dữ liệu ra:
    1 2
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr + 0, arr + n);

    int min = 1e9 + 7, count_min = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] < min)
            min = arr[i] - arr[i - 1];
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == min)
            count_min++;
    }
    
    cout << min << " " << count_min;

    return 0;
}