/*
   C++ Buổi 14_Bài 04.Tính tổng 4.(Đệ Quy).
   Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy.

    Dữ liệu vào:
    Số nguyên dương n.(0≤n≤10^3)
    Dữ liệu ra:
    In ra kết quả của S(n)

    Dữ liệu vào:
    5
    Dữ liệu ra:
    -3
*/

#include <iostream>
#define ll long long

using namespace std;

ll Tong(int);

int main() {
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
    return Tong(n - 1) + pow(-1, n) * n;
}