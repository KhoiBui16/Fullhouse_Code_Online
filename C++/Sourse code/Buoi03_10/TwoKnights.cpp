/*
	C++ Buổi 03_Bài 10.Two Knights.
	Đếm số cách đặt 2 con mã trên bàn cờ vua cỡ k × k với k = 1, 2, 3, .. n sao cho chúng không ăn nhau, 
	2 con mã này được coi là giống nhau.
	Số nguyên dương n duy nhất (1 ≤n ≤10000).
	Gồm n dòng, mỗi dòng là đáp án của bài toán.

	Dữ liệu vào:
	7
	Dữ liệu ra:
	0
	6
	28
	96
	252
	550
	1056
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		long long k = i * i;
		long long scDat = k * (k - 1) / 2, scAn = (i - 1) * (i - 2) * 4;
		cout << scDat - scAn << '\n';
	}
	return 0;
}