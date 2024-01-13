/*
	C++ Buổi 03_Bài 08.Tổng chẵn,lẻ.
	Tính tổng các chữ số là số chẵn và tổng các chữ số là số lẻ.
	Nhập vào n(0≤n≤10^18).
	In ra 2 tổng chẵn lẻ trên 1 dòng.

	Dữ liệu vào:
	1234
	Dữ liệu ra:
	6 4
*/

#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	int c = 0, l = 0;

	while (n != 0)
	{
		int r = n % 10;
		if (r % 2 == 0) c += r;
		else l += r;
		n /= 10;
	}
	cout << c << " " << l;
	return 0;
}