/*
	C++ Buổi 02_Bài 10.Tính tổng, hiệu, tích, thương.
	Nhập vào 2 số nguyên, in ra tổng, hiệu, tích, thương ( lấy độ chính xác với 2 chữ số).
	2 số nguyên a, b(khác 0)
	(-10^9 ≤ a,b ≤ 10^9).
	Tổng, hiệu, tích, thương(lấy độ chính xác 2 chữ số).In mỗi kết quả trên 1 dòng.
	Dữ liệu vào:
	10 2
	Dữ liệu ra:
	12
	8
	20
	5.00
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long a, b;
	cin >> a >> b;
	cout << a + b << endl << a - b << endl << a * b << endl << setprecision(2) << fixed << 1.0 * a / b;

	return 0;
}