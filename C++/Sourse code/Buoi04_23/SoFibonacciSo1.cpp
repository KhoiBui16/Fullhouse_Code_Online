/*
	C++ Buổi 04_Bài 23.Số Fibonacci 1.
	Dãy số Fibonacci được định nghĩa như sau: F1 = 0, F2 = 1; Fi = Fi-1 + Fi-2. 
	Hãy viết chương trình in ra số Fibonacci thứ n.

	Dữ liệu vào:
	Số nguyên dương n.(1≤n≤93)
	Dữ liệu ra:
	Số fibonacci thứ n.

	Dữ liệu vào:
	5
	Dữ liệu ra:
	3
*/

#include <iostream>

using namespace std;

long long SoFibo(long long);

int main()
{
	long long n;
	cin >> n;
	cout << SoFibo(n);
	return 0;
}

long long SoFibo(long long n)
{
	long long f1 = 0, f2 = 1, fn;
	if (n == 0 || n == 1)
		return 1;
	for (int i = 3; i <= n; i++)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
	}
	return fn;
}