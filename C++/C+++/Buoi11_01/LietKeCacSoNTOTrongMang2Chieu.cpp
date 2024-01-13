/*
	C++ Buổi 11_Bài 01.Liệt kê các số nguyên tố trong mảng 2 chiều.
	Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy liệt kê các số nguyên tố theo từng hàng trong ma trận.
	Dòng đầu tiên là 2 số N và M. N 
	dòng tiếp theo mỗi dòng có M số. (1≤n,m≤500; Các phần tử trong ma trận là số dương không quá 10^9)
	In ra các số nguyên tố trong ma trận theo từng dòng.

	Dữ liệu vào:
	3 4
	1 3 55 31
	4 5 7 11
	19 6 88 70
	Dữ liệu ra:
	3 31	
	5 7 11
	19
*/

#include <iostream>

using namespace std;

void EnterInput(long[][100], long&, long&);
bool IsPrime(long);
void LietKeSoNT(long[][100], long, long);

int main()
{
	long n, m;
	cin >> n >> m;
	long a[100][100];
	EnterInput(a, n, m);
	LietKeSoNT(a, n, m);
	return 0;
}

void EnterInput(long a[][100], long& n, long& m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

bool IsPrime(long a)
{
	for (int i = 2; i * i <= a; i++)
		if (!(a % i))
			return false;
	return a > 1;
}

void LietKeSoNT(long a[][100], long n, long m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			if (IsPrime(a[i][j]))
				cout << a[i][j] << " ";
			cout << endl;
	}
}