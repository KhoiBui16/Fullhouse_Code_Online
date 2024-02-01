/*
	C++ Buổi 02_Bài 05.Phần nguyên, phần dư của 1 thương.
	Tính và in ra phần nguyên, phần dư của phép chia 2 số nguyên a, b.
	2 số nguyên a, b.(b khác 0( -10^18 ≤a, b ≤10^18))
	Dữ liệu vào:
	100 50
	Dữ liệu ra:
	2 0
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;
	cout << a / b; cout << " " << a % b;
	return 0;
}