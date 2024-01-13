/*
    C++ Buổi 14_Bài 01.Tính tổng 1(Đệ Quy).
    Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + .. + n bằng đệ quy.

    Dữ liệu vào:
    Số nguyên dương n.(0≤n≤1000)
    Dữ liệu ra:
    In ra S(n).

    Dữ liệu vào:
    100
    Dữ liệu ra:
    5050
*/

#include <iostream>

using namespace std;

int Tong(int);

int main()
{
    int n;
    cin >> n;
    int kq = Tong(n);
    cout << kq;
    return 0;
}

int Tong(int n)
{
    if (n == 0)
        return 0;
    int s = Tong(n - 1);
    return s + n;
}