/*
	C++ Buổi 02_Bài 06.Tính toán giá trị biểu thức.
	Cho biểu thức A(x) = x^3 + 3x^2 + x + 1 Với giá trị của x được nhập từ bàn phím, tính và in ra giá trị của biểu thức trên
	Số nguyên dương x(-10^5 ≤ x ≤ 10^5).
	Dữ liệu vào:
	5
	Dữ liệu ra:
	206
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x;
	cin >> x;
	long long A = pow(x, 3) + 3 * pow(x, 2) + x + 1;
	cout << A;
	return 0;
}