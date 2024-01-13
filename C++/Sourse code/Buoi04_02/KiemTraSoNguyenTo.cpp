/*
	C++ Buổi 04_Bài 02.Kiểm tra số nguyên tố.
	Kiểm tra một số nguyên không âm N có phải là số nguyên tố hay không?

	Dữ liệu vào:
	Dòng duy nhất chứa số nguyên dương N.(0≤N≤10^9)
	Dữ liệu ra:
	In ra YES nếu n là số nguyên tố, ngược lại in NO.

	Dữ liệu vào:
	7
	Dữ liệu ra:
	YES
*/

#include <iostream>

using namespace std;

int checkPrime(long);

int main()
{
	long n;
	cin >> n;
	if (checkPrime(n)) cout << "YES";
	else cout << "NO";
	return 0;
}

int checkPrime(long n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (!(n % i))
			return 0;
	}
	return n > 1;
}