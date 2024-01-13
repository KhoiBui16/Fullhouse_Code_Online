/*
	C++ Buổi 04_Bài 26.Tam giác Pascal.
/	n ra tam giác pascal với chiều cao là n.

	Dữ liệu vào:
	Số nguyên dương n.(1≤n≤12)
	Dữ liệu ra:
	In ra Tam giác pascal tương ứng.

	Dữ liệu vào:
	5
	Dữ liệu ra:
	1
	1 1
	1 2 1
	1 3 3 1
	1 4 6 4 1
*/

#include <iostream>

using namespace std;

long long TinhGiaiThua(long long);
void Xuat(long long);

int main()
{
	long long n;
	cin >> n;
	Xuat(n);
	return 0;
}

long long TinhGiaiThua(long long x)
{
	long long gt = 1;
	for (int i = 1; i <= x; ++i)
		gt *= i;
	return gt;
}

void Xuat(long long n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
			cout << TinhGiaiThua(i) / (TinhGiaiThua(j) * TinhGiaiThua(i - j)) << " ";
		cout << endl;
	}
}