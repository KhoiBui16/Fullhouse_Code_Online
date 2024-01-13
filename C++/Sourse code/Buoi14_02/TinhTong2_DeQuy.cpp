/*
    C++ Buổi 14_Bài 02.Tổng 2(Đệ Quy).
    Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + .. + n^2 bằng đệ quy.

    Dữ liệu vào:
    Số nguyên dương n.(0≤n≤1000)
    Dữ liệu ra:
    In ra S(n).

    Dữ liệu vào:
    5
    Dữ liệu ra:
    55
*/

#include <iostream>

using namespace std;

long Tong(int);

int main()
{
    int n;
    cin >> n;
    long kq = Tong(n);
    cout << kq;
    return 0;
}

long Tong(int n)
{
    if (n == 0)
        return 0;
    return n * n + Tong(n - 1);
}