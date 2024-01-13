/*
	C++ Buổi 06_Bài 07.Số nguyên tố thuận nghịch.
	Hãy liệt kê các số nguyên tố và cũng là số thuận nghịch trong đoạn [a,b].

	Input Format
	Chỉ có một dòng ghi hai số a, b.(1<=a<=b<=10^7).
	Output Format
	In ra các số thỏa mã yêu cầu bài toán trên một hàng mỗi số cách nhau một dấu cách.

	Dữ liệu vào:
	1 100
	Dữ liệu ra:
	2 3 5 7 11
*/

#include <iostream>

using namespace std;
// Số nguyên tố thuận nghịch: 
// Hãy liệt kê các số nguyên tố và cũng là số thuận nghịch trong đoạn [a,b].
bool isPrime(int);
int isReverseNum(int);

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (isReverseNum(i) && isPrime(i))
			cout << i << " ";
	}
	return 0;
}

bool isPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return false;
	}
	return n > 1;
}

int isReverseNum(int n)
{
	int rev = 0, temp = n;
	if (n < 10) return 1;
	while (n != 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev == temp;
}