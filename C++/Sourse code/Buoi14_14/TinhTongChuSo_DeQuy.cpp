/*
	C++ Buổi 14_Bài 14.Tính tổng chữ số sử dụng đệ quy.
	Cho một số nguyên không âm N, hãy tính tổng chữ số của N sử dụng kỹ thuật đệ quy.

	Dữ liệu vào:
	Số nguyên không âm N.(0≤n≤10^18)
	Dữ liệu ra:
	Tổng các chữ số của N

	Dữ liệu vào:
	1234
	Dữ liệu ra:
	10

*/

#include <iostream>
#define ll long long

using namespace std;

ll TongChuSo(ll);

int main()
{
	ll n;
	cin >> n;
	ll kq = TongChuSo(n);
	cout << kq;

	return 0;
}

ll TongChuSo(ll n)
{
	if (n == 0)
		return 0;
	int dv = n % 10;
	return dv + TongChuSo(n / 10);
}