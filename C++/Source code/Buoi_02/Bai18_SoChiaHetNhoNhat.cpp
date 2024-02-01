/*
	C++ Buổi 02_Bài 18.Số chia hết nhỏ nhất.
	Cho 2 số nguyên dương a và b. Tìm số chia hết cho b nhỏ nhất và lớn hơn hoặc bằng a. 
	Chú ý không dùng vòng lặp và các hàm có sẵn.
	2 số nguyên dương a, b ( 1 ≤ b ≤ a ≤10^8).
	Dữ liệu vào:
	21 5
	Dữ liệu ra:
	25
*/
#include <iostream>

using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;
	// cách 1
	if (!(a % b)) cout << a;
	else cout << (a / b + 1) * b;
	// cách 2
//	int c = ceil(a * 1.0 / b);
//	cout << c * b;
	return 0;
}