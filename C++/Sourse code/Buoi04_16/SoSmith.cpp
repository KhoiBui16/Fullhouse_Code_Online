/*
	C++ Buổi 04_Bài 16.Số Smith.
	Cho số tự nhiên N. Nhiệm vụ của bạn là hãy kiểm tra N có phải là số Smith hay không. 
	Một số được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng các chữ số của các thừa số nguyên tố trong phân tích của N. 
	Ví dụ N = 666 có các thừa số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18.

	Dữ liệu vào:
	Số nguyên dương N.(1≤N≤10^8).
	Dữ liệu ra:
	In ra YES nếu N là số Smith, ngược lại in ra NO.

	Dữ liệu vào:
	22
	Dữ liệu ra:
	YES
*/

#include <iostream>
#include <cmath>

using namespace std;

int CheckPrime(int);
int SumDigit(int);
int Smith(int);

int main() 
{
	int n;
	cin >> n;
	if (!CheckPrime(n) && Smith(n) == SumDigit(n))
		cout << "YES";
	else cout << "NO";
	return 0;
}

int CheckPrime(int n) 
{
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)	return 0;
	}
	return 1;
}

int SumDigit(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int Smith(int n) 
{
	int tong = 0;
	for (int i = 2; i * i <= n; i++)
	{
		while (!(n % i))
		{
			tong += SumDigit(i);
			n /= i;
		}
	}
	if (n != 1)
		tong += SumDigit(n);
	return tong;
}
