/*
	C++ Buổi 04_Bài 09.Ước số nguyên tố lớn nhất.
	Tìm ước số nguyên tố lớn nhất của một số nguyên dương.

	Dữ liệu vào:
	Dòng đầu tiên là số lượng test case T; T dòng tiếp theo mỗi dòng là một số nguyên dương N.(1≤T≤500; 2≤N≤10000000).
	Dữ liệu ra:
	Ước số nguyên tố lớn nhất của n in ra mỗi test case trên 1 dòng

	Dữ liệu vào:
	2
	13
	10
	Dữ liệu ra:
	13
	5
*/

#include <iostream>

using namespace std;

int lagerstPrimeNum(int);

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << lagerstPrimeNum(n) << endl;
	}
	return 0;
}

int lagerstPrimeNum(int n)
{
	int res;
	for (int i = 2; i * i <= n; ++i)
	{
		while (n % i == 0)
		{
			res = i;
			n /= i;
		}
	}
	if (n != 1) res = n;
	return res;
}