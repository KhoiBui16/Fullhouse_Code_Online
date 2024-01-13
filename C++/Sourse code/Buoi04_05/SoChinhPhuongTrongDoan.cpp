/*
	C++ Buổi 04_Bài 05.Số Chính Phương trong đoạn.
	In ra các số chính phương trong đoạn từ a tới b.

	Dữ liệu vào:
	2 số nguyên dương a, b.(1≤a≤b≤10^10).
	Dữ liệu ra:
	In ra các số chính phương trong đoạn giữa 2 số a, b trên một dòng. Các số cách nhau một khoảng trắng

	Dữ liệu vào:
	2 20
	Dữ liệu ra:
	4 9 16
*/

#include <iostream>

using namespace std;

void SquareNumbers(long long, long long);

int main()
{
	long long a, b;
	cin >> a >> b;
	SquareNumbers(a, b);
	return 0;
}

void SquareNumbers(long long a, long long b)
{
	long long c1 = sqrt(a), c2 = sqrt(b);
	if (c1 * c1 != a) ++c1;
	for (long long i = c1; i <= c2; ++i)
	{
		cout << i * i << " ";
	}
}