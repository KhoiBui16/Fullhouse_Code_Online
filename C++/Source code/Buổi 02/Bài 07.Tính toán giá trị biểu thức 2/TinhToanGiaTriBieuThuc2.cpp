/*
	C++ Buổi 02_Bài 07.Tính toán giá trị biểu thức 2.
	Cho ba số nguyên dương a , b và c, hãy tính S = a(b+c)+b(a+c).
	Một dòng ba số nguyên a, b, c(0 ≤ a,b,c ≤ 10^9).
	Dữ liệu vào:
	1 2 3
	Dữ liệu ra:
	13
*/

#include <iostream>

using namespace std;

int main()
{
	long a, b, c;
	cin >> a >> b >> c;
	long S = a * (b + c) + b * (a + c);
	cout << S;
	return 0;
}