/*
	C++ Buổi 04_Bài 24.Số Fibonacci 2.
	Nhập vào một số và kiểm tra xem số vừa nhập có phải là số trong dãy fibonacci hay không?

	Dữ liệu vào:
	Số nguyên không âm n.(0≤n≤9*10^18)
	Dữ liệu ra:
	In ra YES nếu n là số Fibonacci, ngược lại in NO.

	Dữ liệu vào:
	6
	Dữ liệu ra:
	NO
*/

#include <iostream>

using namespace std;

bool isFibo(long long);

int main()
{
	long long n;
	cin >> n;
	if (isFibo(n) == true)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}


bool isFibo(long long n)
{
	long long F0 = 0, F1 = 1, Fn;
	if (n == 0 || n == 1)
		return true;
	for (int i = 3; i <= 93; i++)
	{
		Fn = F0 + F1;
		F0 = F1;
		F1 = Fn;
		if (Fn == n)
			return true;
	}
	return false;
}