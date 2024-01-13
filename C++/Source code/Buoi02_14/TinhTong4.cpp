
/*
	C++ Buổi 02_Bài 14.Tính tổng 4.
	Tính tổng sau : Sn = 2 + 4 + 6 + 8 + … + 2 * n
	Số nguyên dương n. ( 1 ≤ n ≤ 10^9).
	Dữ liệu vào:
	3
	Dữ liệu ra:
	12
*/

#include <iostream>

using namespace std;

int main()
{
	long n;
	cin >> n;
	long long T = n * (n + 1);
	cout << T;
	return 0;
}