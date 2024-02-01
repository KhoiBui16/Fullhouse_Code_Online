/*
	C++ Buổi 14_Bài 05.Tính giai thừa.(Đệ Quy).
	Tính n giai thừa bằng đệ quy.

	Dữ liệu vào:
	Số nguyên dương N.(0≤n≤20)
	Dữ liệu ra:
	Kết quả của N!

	Dữ liệu vào:
	5
	Dữ liệu ra:
	120
*/

#include <iostream>
#define ll long long

using namespace std;

ll GiaiThua(int);

int main()
{
    int n;
    cin >> n;
    ll kq = GiaiThua(n);
    cout << kq;
    return 0;
}

ll GiaiThua(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    return GiaiThua(n - 1) * n;
}