/*
    C++ Buổi 10_Bài 14.Số thao tác giúp mảng tăng dần 1.
    Cho dãy số A[] gồm có N phần tử. Ở mỗi thao tác bạn có thể tăng các phần tử trong mảng lên 1 vài đơn vị, hãy xác định số đơn vị tối thiểu cần thêm vào các phần tử trong mảng sao cho mảng trở thành một dãy tăng dần. Ví dụ dãy 1 2 3 4 5 là một dãy tăng dần.Còn dãy 1 2 3 4 4 không phải tăng dần.

    Input Format
    Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i].(1≤ N ≤ 10^6; 0 ≤ A[i]) ≤ 10^6)

    Output Format
    In ra số đơn vị tối thiểu cần thêm vào các phần tử trong mảng để dãy tăng dần.

    Ví dụ:
    Dữ liệu vào:
    5
    1 2 1 3 2
    Dữ liệu ra:
    6
*/

#include <iostream>
using namespace std;

long long minOperations(int arr[], int n)
{
    long long operations = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            operations += arr[i - 1] - arr[i] + 1;
            arr[i] = arr[i - 1] + 1;
        }
    }
    return operations;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long result = minOperations(arr, n);
    cout << result;

    return 0;
}