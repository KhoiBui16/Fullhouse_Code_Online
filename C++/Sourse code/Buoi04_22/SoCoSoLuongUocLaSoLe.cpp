/*
	C++ Buổi 04_Bài 22.Số có số lượng ước là số lẻ.
	Kiểm tra xem một số có số lượng ước số của nó là số lẻ

	Dữ liệu vào:
	Số nguyên dương N.(1≤N≤2*10^18)
	Dữ liệu ra:
	In ra YES nếu N là số có số ước là số lẻ, ngược lại in NO.

	Dữ liệu vào:
	100
	Dữ liệu ra:
	YES
*/

#include <iostream>
#include <cmath>

using namespace std;

int checkSoChinhPhuong(long long);

int main()
{
	long long n;
	cin >> n;
	if (checkSoChinhPhuong(n))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

int checkSoChinhPhuong(long long n)
{
	long long r = sqrt(n);
	return r == sqrt(n);
}