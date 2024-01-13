/*
	C++ Buổi 04_Bài 17.Số Hoàn Hảo.
	Số hoàn hảo là số có tổng các ước thực sự (Không tính chính nó) bằng chính số đó.
	Cho một số nguyên dương n, kiểm tra xem n có phải là số hoàn hảo hay không

	Dữ liệu vào:
	Số nguyên dương N(1≤N≤9*10^18).
	Dữ liệu ra:
	In YES nếu N là số hoàn hảo, ngược lại in NO.

	Dữ liệu vào:
	6
	Dữ liệu ra:
	YES

*/

#include <iostream>
#include <cmath>

using namespace std;

bool CheckPrimeNumbers(long long);
bool CheckSoHoanHao(long long);		// Cách 1
int Is_PerfectNumber(long long);	// Cách 2

int main()
{
	long long n;
	cin >> n;
	if (CheckSoHoanHao(n))
		cout << "YES";
	else cout << "NO";
	return 0;
}

bool CheckPrimeNumbers(long long n)
{
	for (int i = 2; 1ll * i * i <= n; ++i)
	{
		if (n % i == 0) return false;
	}
	return n > 1;
}
// Cách 1:
bool CheckSoHoanHao(long long n)
{
	for (int i = 1; i <= 32; ++i)
	{
		if (CheckPrimeNumbers(i))
		{
			long long tam = (int)pow(2, i) - 1;
			if (CheckPrimeNumbers(tam))
			{
				long long SoHoanHao = 1ll * tam * (int)pow(2, i - 1);
				if (SoHoanHao == n) return true;
			}
		}
	}
	return false;
}
// Cách 2:
int Is_PerfectNumber(long long n) {
	int i = 2;
	long long check = pow(2, i - 1) * (pow(2, i) - 1);
	while (check < n)
	{
		++i;
		check = pow(2, i - 1) * (pow(2, i) - 1);
	}
	return (check == n && CheckPrimeNumbers(i) && CheckPrimeNumbers(pow(2, i) - 1));
}
