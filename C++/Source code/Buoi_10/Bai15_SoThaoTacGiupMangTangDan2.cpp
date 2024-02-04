/*
    C++ Buổi 10_Bài 15.Số thao tác giúp mảng tăng dần 2.
    Cho dãy số A[] gồm có N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng lên 1 lượng là d đơn vị, hãy xác định số thao tác tối thiểu sao cho mảng trở thành một dãy tăng chặt. Ví dụ dãy 1 2 3 7 8 là một dãy tăng chặt, nhưng dãy 1 2 2 7 8 không phải là một dãy tăng chặt. Ví dụ với mảng ban đầu là 1 3 3 2 và d = 2, ta cần thực hiện thao tác thứ nhất thêm d vào phần tử thứ 3 trong mảng, mảng trở thành 1 3 5 2, ta tiếp thục thực hiện 2 thao tác thêm d vào phần tử thứ 4, mảng trở thành dãy tăng chặt là 1 3 5 6

    Input Format
    Dòng đầu tiên là số nguyên N và số d. Dòng tiếp theo gồm N số nguyên A[i].(1≤ N, d ≤ 10^4; 0 ≤ A[i] ≤ 10^6)

    Output Format
    In ra số thao tác tối thiểu cần thực hiện để biến mảng thành dãy tăng chặt.

    Ví dụ:
    Dữ liệu vào:
    5 2
    1 2 1 3 6
    Dữ liệu ra:
    2
*/


#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


long minOperations(int a[], int n, int d)
{
    long minOps = 0; // số bước tối thiểu
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            // số đơn vị tối thiếu cần tăng để a[i] > a[i - 1]
            int at_least_increase_units = a[i - 1] - a[i] + 1; 

            // số bước cần thực hiện cho 1 phần tử a[i] <= a[i - 1]
            int ops = ceil((double)at_least_increase_units / d); 

            // cập nhật lại a[i] để > a[i - 1]
            a[i] += ops * d;
            minOps += ops;
        }
    }
    return minOps;
}

/*  Cách này chạy chưa được tối ưu
long minOperations(vector<int> a, int n, int d)
{
    long minOps = 0;
    for (int i = 1; i < n ; i++)
    {
        if (a[i] <= a[i - 1])
        {
            int ops = (a[i - 1] - a[i]) / d + 1;    // số lần thực hiện phép cộng d
            a[i] += ops * d;    // tăng chặt a[i] d đơn vị với số lần cần thực hiện công
            minOps += ops;
        }
    }
    return minOps;
}
*/

int main()
{
    int n;
    cin >> n;
    int d;
    cin >> d;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long result = minOperations(a, n, d);
    cout << result;

    return 0;
}