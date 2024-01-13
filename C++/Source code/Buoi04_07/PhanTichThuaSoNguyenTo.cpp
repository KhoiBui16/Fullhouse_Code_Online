/*
	C++ Buổi 04_Bài 07.Phân tích thừa số nguyên tố.
	Hãy phân tích một số nguyên dương N thành thừa số nguyên tố

	Dữ liệu vào:
	Số nguyên dương N.(1≤N≤10^16).
	Dữ liệu ra:
	Phân tích thừa số nguyên tố của N, xem ví dụ để rõ hơn format.

	Dữ liệu vào:
	30
	Dữ liệu ra:
	2^1 * 3^1 * 5^1
*/

#include <iostream>
using namespace std;

void phanTichTSNT(long long);

int main()
{
	long long n;
	cin >> n;
	phanTichTSNT(n);
	return 0;
}

void phanTichTSNT(long long n)
{
	for (long long i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
		{
			long long dem = 0;
			while (n % i == 0)
			{
				++dem;
				n /= i;
			}
			cout << i << "^" << dem << " ";
			if (n != 1) cout << "* ";
		}
	}
	if (n != 1) cout << n << "^1";
}