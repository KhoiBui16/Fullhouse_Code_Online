/*
	C++ Buổi 06_Bài 02.N số Fibo đầu tiên.
	Nhập 1 số nguyên dương N> bạn hãy in N số Fibo đầu tiên và mỗi số sẽ được in trên 1 hàng.

	Input Format
	Nhập 1 số nguyên dương.(1 ≤ N ≤ 93).
	Output Format
	In ra kết quả của bài toán.

	Dữ liệu vào:
	4
	Dữ liệu ra:
	0
	1	
	1
	2
*/

#include <iostream>
#define ll long long

using namespace std;

void fibo(ll);

int main()
{
	long long n;
	cin >> n;
	fibo(n);
	return 0;
}

void fibo(ll n)
{
	ll f1 = 0, f2 = 1, fn;
	if (n == 1)
		cout << f1 << endl;
	if (n == 2)
	{

		cout << f1 << endl;
		cout << f2 << endl;
	}
	if (n >= 3)
	{
		cout << f1 << endl;
		cout << f2 << endl;
		for (int i = 3; i <= n; i++)
		{
			fn = f1 + f2;
			f1 = f2;
			f2 = fn;
			cout << fn << endl;
		}
	}
}