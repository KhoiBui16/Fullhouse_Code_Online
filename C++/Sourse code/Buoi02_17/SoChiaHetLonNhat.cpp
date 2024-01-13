/*
	C++ Buổi 02_Bài 17.Số chia hết lớn nhất.
	Cho 2 số nguyên dương a và b. Tìm số chia hết cho b lớn nhất và không vượt qua a. Chú ý không dùng vòng lặp và các hàm có sẵn.
	2 số nguyên dương a, b (1 ≤ b ≤ a ≤10^8)
	Dữ liệu vào:
	19 5
	Dữ liệu ra:
	15
*/
#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;
	// cách 1
	cout << a / b * b;
	// cách 2
//	cout << a - (a % b);
	return 0;
}