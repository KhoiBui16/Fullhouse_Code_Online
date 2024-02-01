/*
	C++ Buổi 04_Bài 04.Kiểm tra sô chính phương.
	Kiểm tra một số nguyên có phải là số chính phương hay không?

	Dữ liệu vào:
	Một số nguyên dương N.(1≤N≤10^18).
	Dữ liệu ra:
	In ra YES nếu N là số chính phương, ngược lại in NO

	Dữ liệu vào:
	16
	Dữ liệu ra:
	YES
*/

#include <iostream>
#include <cmath>

using namespace std;

int checkSquareNum(long long);

int main()
{
	long long n;
	cin >> n;
	if (checkSquareNum(n)) cout << "YES";
	else cout << "NO";
	return 0;
}

int checkSquareNum(long long n)
{
	int r = sqrt(n);
	return r == sqrt(n);
}