/*
	C++ Buổi 02_Bài 08.Tính chu vi, diện tích hình tròn.
	Bán kính r của hình tròn là một số nguyên.(1 ≤ r ≤ 10^6).
	In kết quả chu vi và diện tích của hình tròn lấy độ chính xác với 2 chữ số,cách nhau một khoảng cách.
	Dữ liệu vào:
	1000000
	Dữ liệu ra:
	6280000.00 3140000000000.00
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int r;
	cin >> r;
	double P = r * 2 * 3.14;
	double S = r * 3.14 * r;
	cout << setprecision(2) << fixed << P << " " << setprecision(2) << fixed << S;
	return 0;
}