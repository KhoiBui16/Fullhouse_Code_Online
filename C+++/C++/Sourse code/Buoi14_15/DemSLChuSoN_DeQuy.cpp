/*
	C++ Buổi 14_Bài 15.Đếm số lượng chữ số của N sử dụng đệ quy.
	Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.

	Dữ liệu vào:
	Số nguyên không âm N.(0≤n≤10^18)
	Dữ liệu ra:
	Số lượng chữ số của N.

	Dữ liệu vào:
	1234
	Dữ liệu ra:
	4
*/

#include <iostream>
#define ll long long

using namespace std;

ll SoLuongChuSo(ll);

int main()
{
	ll n;
	cin >> n;
	ll kq = SoLuongChuSo(n);
	cout << kq;

	return 0;
}

ll SoLuongChuSo(ll n)
{
	if (n <= 9)
		return 1;
	return 1 + SoLuongChuSo(n / 10);
}