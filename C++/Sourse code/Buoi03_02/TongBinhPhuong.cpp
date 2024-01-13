/*
	C++ Buổi 03_Bài 2.Tổng bình phương.
	Tính tổng S(n) = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2.
	Số nguyên dương n.(1≤N≤10^5).
	Dữ liệu vào:
	2
	Dữ liệu ra:
	5
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	long long s = 0;
	// n = 2
	for (int i = 1; i <= n; ++i)
		s += pow(i, 2);

	cout << s;
	return 0;
}
