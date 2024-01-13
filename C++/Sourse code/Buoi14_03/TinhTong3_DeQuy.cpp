/*
    C++ Buổi 14_Bài 03.Tính tổng 3.(Đệ Quy).
    Tính tổng hàm S(n) = 1^3 + 2^3 + 3^3 + 4^3 + .. + n^3 bằng đệ quy.

    Dữ liệu vào:
    Số nguyên dương n.(0≤n≤10^3)
    Dữ liệu ra:
    In ra kết quả của S(n)

    Dữ liệu vào:
    5
    Dữ liệu ra:
    225
*/

#include <iostream>
#define ll long long
using namespace std;

ll Tong(int);

int main()
{
    int n;
    cin >> n;
    ll kq = Tong(n);
    cout << kq;
    return 0;
}

ll Tong(int n)
{
    if (n == 0)
        return 0;
    return (n * n * n) + Tong(n - 1);
}