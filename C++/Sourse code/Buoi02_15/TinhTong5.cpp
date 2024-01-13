
/*
	C++ Buổi 02_Bài 15.Tính tổng 5.
	Sn = -1 + 2 -3 + 4 -5 + 6 + ... + (-1) ^ n * n
	Số nguyên dương n.( 1 ≤ n ≤ 10^16).
	Dữ liệu vào:
	5
	Dữ liệu ra:
	-3
*/

#include <iostream>

using namespace std;

int main()
{
	long n;
	cin >> n;
	if (n % 2 == 0) cout << n / 2;
	else cout << (-1) * (n / 2 + 1);
	return 0;
}