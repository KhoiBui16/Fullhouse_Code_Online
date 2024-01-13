/*
	C++ Buổi 12_Bài 01.Cộng 2 ma trận.
	Cho ma trận A cỡ nxm, ma trận B cỡ nxm. Hãy tính ma trận tổng của A và B.

	Input Format
	Dòng đầu tiên là 2 số n, m. 1≤n,m,p≤50; Các phần tử trong ma trận là số dương không quá 10^9.

	Output Format
	In ra ma trận tổng của A và B

	Dữ liệu vào:
	3 4
	2 3 4 5
	6 7 8 1
	1 2 2 5
	8 3 4 10
	6 13 8 1
	1 2 2 9
	Dữ liệu ra:
	10 6 8 15
	12 20 16 2
	2 4 4 14
*/

#include <iostream>

using namespace std;

void Nhap(int[][100], int[][100], int&, int&);
void TongMaTran(int[][100], int[][100], int, int);

int main()
{
	int n, m;
	cin >> n >> m;
	int a[100][100];
	int	b[100][100];
	Nhap(a, b,  n, m);
	TongMaTran(a, b, n, m);
	return 0;
}

void Nhap(int a[][100], int b[][100], int& n, int& m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> b[i][j];
}

void TongMaTran(int a[][100], int b[][100], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] + b[i][j] << " ";
		if (i < n - 1)
		cout << endl;
	}
}