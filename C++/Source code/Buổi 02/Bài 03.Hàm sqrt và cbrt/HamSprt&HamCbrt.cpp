/*
	C++ Buổi 02_Bài 03.Hàm sqrt và cbrt.
	Cho số nguyên dương a, nhiệm vụ của bạn là tính căn bậc 2 và căn bậc 3 của a.
	Nhập vào số nguyên dương a. (-10^9 ≤ a ≤ 10^9).
	In ra căn bậc 2 của a với 3 số sau dấu phẩy và
	căn bậc 3 của a với 3 số sau dấu phẩy mỗi đáp án cách nhau 1 dấu cách.

	Dữ liệu vào:
	28
	Dữ liệu ra:
	5.292 3.037
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	long n;
	cin >> n;
	cout << setprecision(3) << fixed << sqrt(n);
	cout << setprecision(3) << fixed << " " << cbrt(n);
	return 0;
}