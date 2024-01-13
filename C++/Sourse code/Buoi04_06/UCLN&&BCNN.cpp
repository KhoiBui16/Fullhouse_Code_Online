/*
	C++ Buổi 04_Bài 06.Ước chung lớn nhất, bội chung nhỏ nhất.
	Tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên.

	Dữ liệu vào:
	2 số nguyên a, b.(1≤a,b≤10^12).
	Dữ liệu ra:
	In ra uớc chung lớn nhất và bội chung nhỏ nhất.

	Dữ liệu vào:
	20 50
	Dữ liệu ra:
	10 100
*/

#include <iostream>
#define ll long long 

using namespace std;

ll GCD(ll, ll); // ước chung lớn nhất
ll LCM(ll, ll); // bội chung nhỏ nhất

int main()
{
	ll a, b;
	cin >> a >> b;
	cout << GCD(a, b) << " " << LCM(a, b);
	return 0;
}

ll GCD(ll a, ll b)
{
	if (a == 0 || b == 0)
		return a + b;
	while (a != b)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a;
}

ll LCM(ll a, ll b)
{
	return a / GCD(a, b) * b;
}