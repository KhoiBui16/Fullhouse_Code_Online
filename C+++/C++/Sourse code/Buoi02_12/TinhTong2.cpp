/*
	C++ Buổi 02_Bài 12.Tính tổng 2.
	Tính tổng sau: Sn = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 + … + n^2
	Số nguyên không âm n. ( 0 ≤ n ≤ 10^6).
	Dữ liệu vào:
	5
	Dữ liệu ra:
	55
*/
#include <iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long s = (n * (n + 1) * (2 * n + 1)) / 6;
	cout << s;
	return 0;
}