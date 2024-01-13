/*
	C++ Buổi 03_Bài 04.Tính tổng ước.
	Tính tổng ước của số nguyên dương n.
	Số nguyên dương n,(1 ≤ n ≤ 10^12).
	Dữ liệu vào:
	5
	Dữ liệu ra:
	6
*/

#include <iostream>
#include <cmath>

using namespace std;

int checkSquareNum(long long n)
{
	long long s = sqrt(n);
	return s == sqrt(n);
}


int main()
{
	// Cách 1:
	long long n;
	cin >> n;
	long long sum = 0;

	for (long long i = 1; i * i <= n; ++i)
		if (!(n % i))
			sum += i + n / i;

	if (checkSquareNum(n))
		sum -= n / sqrt(n);
	cout << sum;

	// Cách 2:
	/*
	long long n;
	cin >> n;
	long long sum = 0;
	for (long long i = 1; i * i <= n; ++i)
	{
		if (!(n % i))
		{
			long long j = n / i;
			if (i == j) sum += j;
			else sum += j + i;
		}
	}
	cout << sum;
	*/
	return 0;
}