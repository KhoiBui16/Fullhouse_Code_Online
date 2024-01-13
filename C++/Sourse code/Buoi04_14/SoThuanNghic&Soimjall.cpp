/*
	C++ Buổi 04_Bài 14.Số thuận nghịch, lộc phát.
	Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8. 
	Viết chương trình liệt kê các số đẹp trong đoạn giữa 2 số nguyên cho trước, các số cách nhau một dấu cách.
	Nếu trong đoạn không có số đẹp thì in ra -1.

	Dữ liệu vào:
	2 số nguyên a, b.(1≤a≤b≤10^6).
	Dữ liệu ra:
	Liệt kê các số đẹp trong đoạn, các số viết cách nhau một khoảng trống.

	Dữ liệu vào:
	100 300
	Dữ liệu ra:
	161
*/

#include <iostream>

using namespace std;

int soTN(int);
int chuSo(int);
int Tong(int);
void Output(int, int);

int main()
{
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	Output(a, b);
	return 0;
}

int soTN(int n)
{
	if (n < 10) return 1;
	int temp = n, rev = 0;
	while (n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	if (rev == temp) return 1;
	return 0;
}

int chuSo(int n)
{
	while (n)
	{
		int r = n % 10;
		if (r == 6) return 1;
		n /= 10;
	}
	return 0;
}

int Tong(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	if (sum % 10 == 8) return 1;
	return 0;
}

void Output(int a, int b)
{
	int cnt = 0;
	for (int i = a; i <= b; ++i)
	{
		if (chuSo(i) && Tong(i) && soTN(i))
		{
			cout << i << " ";
			++cnt;
		}
	}
	if (cnt == 0) cout << "-1";
}