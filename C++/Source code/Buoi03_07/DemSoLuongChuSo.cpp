/*
	C++ Buổi 03_Bài 07.Đếm số lượng chữ số.
	Nhập số nguyên dương n(0≤n≤10^18).
	Dữ liệu vào:
	2441
	Dữ liệu ra:
	4
*/

#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	int cnt = 0;

	while (n != 0)
	{
		int r = n % 10;
		++cnt;
		n /= 10;
	}
	cout << cnt;
	return 0;
}