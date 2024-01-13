/*
	C++ Buổi 02_Bài 04.Hàm pow.
	Ở bài tập này bạn hãy nhập vào 2 số nguyên x và y.Bạn hãy tính x^y.
	2 số nguyên x,y.(1 ≤ x,y ≤ 10).
	Dữ liệu vào:
	2 3
	Dữ liệu ra
	8
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	cout << (long long)pow(x, y);
	return 0;
}