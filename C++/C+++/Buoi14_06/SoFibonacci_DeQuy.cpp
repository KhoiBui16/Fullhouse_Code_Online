/*
	C++ Buổi 14_Bài 06.Số fibonacci.(Đệ Quy).
	Dãy số fibonacci là dãy số thỏa mãn : F1=0, F2=1, Fn=Fn-1+Fn-2. 
	Hãy tìm số Fibonacci thứ n sử dụng đệ quy.

	Dữ liệu vào:
	Số nguyên dương n.(1≤n≤20)
	Dữ liệu ra:
	In ra số Fibonacci thứ n.

	Dữ liệu vào:
	2
	Dữ liệu ra:
	1
*/

#include <iostream>
#define ll long long

using namespace std;

ll Fibo(int);

int main()
{
	int n;
	cin >> n;
	ll kq = Fibo(n);
	cout << kq;
	return 0;
}

ll Fibo(int n)
{
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	return  Fibo(n - 1) + Fibo(n - 2);
}