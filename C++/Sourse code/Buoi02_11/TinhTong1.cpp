/*
	C++ Buổi 02_Bài 11.Tính tổng 1.
	Sn = 1 + 2 + 3 + 4 + … + n.
	Số nguyên không âm n.(1 ≤ n ≤ 10^8).
	Dữ liệu vào:
	7
	Dữ liệu ra:
	8
*/
#include <iostream>

using namespace std;

int main()
{
	long n;
	cin >> n;
	long long s = n * (n + 1) / 2;
	cout << s;
	return 0;
}