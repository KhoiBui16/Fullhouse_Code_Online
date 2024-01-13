/*
	C++ Buổi 14_Bài 12.Chuyển hệ thập phân sang hệ nhị phân.(Đệ Quy).
	Cho một số nguyên không âm N, hãy in ra dạng biểu diễn nhị phân của số N.

	Dữ liệu vào:
	Số nguyên không âm N.(0≤n≤10^18)

	Dữ liệu ra:
	Biểu diễn nhị phân của số nguyên N.

	Dữ liệu vào:
	9
	Dữ liệu ra:
	1011
*/

#include <iostream>
using namespace std;

void OCTtoBIN(long long);

int main()
{
	long long n;
	cin >> n;
	OCTtoBIN(n);
	return 0;
}

void OCttoBIN(long long n)
{
	if (n == 0)
		return;

	OCTtoBIN(n / 2);
	cout << n % 2 << "";
}