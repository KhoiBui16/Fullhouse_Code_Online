/*
	C++ Buổi 06_Bài 06.Chữ số cuối cùng lớn nhất.
	Viết chương trình C++ cho phép nhập vào n và
	liệt kê các số nguyên tố thỏa mãn nhỏ hơn hoặc bằng n và có chữ số cuối cùng lớn nhất.
	Có bao nhiêu số như vậy?

	Input Format
	Số nguyên dương n(1≤n≤10^7).
	Output Format
	Dòng đầu tiên liệt kê các số thỏa mãn, và dòng thứ 2 in ra số lượng số thỏa mãn.

	Dữ liệu vào:
	100
	Dữ liệu ra:
	2 3 5 7 11 13 17 19 23 29 37 47 59 67 79 89
	16
*/

#include <iostream>

using namespace std;

bool isPrime(int);
bool checkLastDigits(int);

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		if (checkLastDigits(i) && isPrime(i))
		{
			cout << i << " ";
			++cnt;
		}
	}
	cout << endl;
	cout << cnt;
	return 0;
}

bool isPrime(int n)
{
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return n > 1;
}

bool checkLastDigits(int n)
{
	int flag = 1;
	int lc = n % 10;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv > lc)
			flag = 0;
		t /= 10;
	}
	return flag;
}