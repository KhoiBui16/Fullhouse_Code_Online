/*
    C++ Buổi 10_Bài 04.Truy vấn tổng trên đoạn.
    Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ chỉ số l tới chỉ số r.

    Input Format
    Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]. Dòng tiếp theo là số lượng truy vấn Q. Q dòng tiếp theo mỗi dòng là 2 chỉ số l, r.(1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 ≤ l ≤ r ≤ N)

    Output Format
    In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng.

    Ví dụ:
    Dữ liệu vào:
    6
    1 2 3 4 5 6
    1
    2 4
    Dữ liệu ra:
    9
*/

#include <iostream>
using namespace std;

long long SumOnRange(long arr[], int n, int left, int right)
{
    long long sum = 0;
    for (int i = left; i <= right; i++)
        sum += arr[i - 1];
    return sum;
}

int main()
{
    int n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int numQueries;
    cin >> numQueries;

    while (numQueries--)
    {
        int left, right;
        cin >> left >> right;
        long long sum = SumOnRange(arr, n, left, right);
        cout << sum << endl;
    }
    return 0;
}