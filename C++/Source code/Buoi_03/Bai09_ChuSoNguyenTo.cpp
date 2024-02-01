/*
	C++ Buổi 03_Bài 09.Chữ số nguyên tố.
	Đếm số lượng chữ số nguyên tố của n.
	Nhập vào n nguyên (0≤n≤10^18).

	Dữ liệu vào:
	1222333999888
	Dữ liệu ra:
	6
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
		if (r == 2 || r == 3 || r == 5 || r == 7)
			++cnt;
		n /= 10;
	}
	cout << cnt;
	return 0;
}