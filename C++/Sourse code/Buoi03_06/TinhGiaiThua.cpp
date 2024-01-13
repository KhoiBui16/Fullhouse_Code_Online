/*
	C++ Buổi 03_Bài 06.Tính giai thừa.
	Nhập n không âm không quá 20, tính và in ra n!
	Số nguyên không âm n(1 ≤ n ≤ 20).
	Dữ liệu vào:
	8
	Dữ liệu ra:
	40320
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long gt = 1;

	for (int i = 1; i <= n; i++)
		gt *= i;
	cout << gt;

	return 0;
}