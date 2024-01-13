/*
	C++ Buổi 14_Bài 09.Tính tổng 5.(Đệ Quy)
	Tính tổng S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n bằng đệ quy.

	Dữ liệu vào:
	Số nguyên dương n.(1≤n≤1000)
	Dữ liệu ra:
	In ra S(n) lấy 3 số sau dấu phẩy.

	Dữ liệu vào:
	5
	Dữ liệu ra:
	2.283
*/

#include <iostream>
#include <iomanip>

using namespace std;

float Tong(int);

int main()
{
	int n;
	cin >> n;
	float kq = Tong(n);
	cout << fixed << setprecision(3) << kq;

	return 0;
}

float Tong(int n)
{
	if (n == 1)
		return 1;
	return Tong(n - 1) + (float)1 / n;
}