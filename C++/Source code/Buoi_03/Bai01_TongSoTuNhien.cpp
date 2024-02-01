/*
	C++ Buổi 03_Bài 01.Tổng số tự nhiên.
	Tính tổng S(n) = 1 + 2 + 3 + ... + n
	Số nguyên dương N.(1≤N≤10^6)
	Dữ liệu vào:
	5
	Dữ liệu ra:
	15
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long s = 0;

	for (int i = 1; i <= n; ++i)
		s += i;
	cout << s;
	return 0;
}