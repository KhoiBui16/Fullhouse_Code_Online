/*
	C++ Buổi 14_Bài 13.Chuyển hệ thập phân sang hệ 16.(Đệ Quy).
	Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.
	Dữ liệu vào:
	Số nguyên không âm N.(0≤n≤10^18)

	Dữ liệu ra:
	Biểu diễn hệ 16 của số nguyên N.

	Dữ liệu vào:
	125
	Dữ liệu ra:
	7D
*/

#include <iostream>
using namespace std;

void OCTtoHEX(long long);

int main()
{
	long long n;
	cin >> n;
	OCTtoHEX(n);
	return 0;
}

void OCTtoHEX(long long n)
{
	if (n == 0)
		return;
	OCTtoHEX(n / 16);
	int du = n % 16;
	if (du == 10)
		cout << "A";
	else if (du == 11)
		cout << "B";
	else if (du == 12)
		cout << "C";
	else if (du == 13)
		cout << "D";
	else if (du == 14)
		cout << "E";
	else if (du == 15)
		cout << "F";
	else
		cout << du;
}
