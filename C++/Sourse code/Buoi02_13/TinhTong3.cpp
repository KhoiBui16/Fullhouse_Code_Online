/*
	C++ Buổi 02_Bài 13.Tính tổng 3.
	Sn = 1 / (1 * 2) + 1 / (2 * 3) + 1 / (3 * 4) + ...+ 1 / n * (n + 1)
	Số nguyên dương n.(1 ≤ n ≤ 10^9).
	Kết quả của bài toán lấy độ chính xác 4 chữ số.
	Dữ liệu vào:
	99
	Dữ liệu ra:
	0.9900
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long n;
	cin >> n;
	float T = 1.0 * n / (n + 1);
	cout << setprecision(4) << fixed << T;
	return 0;
}