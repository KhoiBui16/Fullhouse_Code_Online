/*
	C++ Buổi 03_Bài 03.Liệt kê ước.
	Số nguyên dương N không quá.(1≤N≤10^6).
	Dữ liệu vào:
	5
	Dữ liệu ra:
	2
	1 5
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)	++dem;
	}

	cout << dem << endl;

	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			cout << i << " ";

	return 0;
}