/*
	C++ Buổi 11_Bài 08.Hoán vị 2 cột của ma trận.
	Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. 
	Hãy hoán vị các phần tử trên 2 cột của ma trận.

	Input Format
	Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số. 
	Dòng tiếp theo là 2 cột u, v cần hoán vị. 
	(1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9; 1≤u,v≤200)

	Output Format
	In ra ma trận sau khi hoán vị 2 cột.

	Dữ liệu vào:
	5
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
	1 5

	Dữ liệu ra:
	5 2 3 4 1
	10 7 8 9 6
	15 12 13 14 11
	20 17 18 19 16
	25 22 23 24 21
*/

#include <iostream>
using namespace std;

void NhapMaTran(long[][200], int&);
void HoanVi2Cot(long[][200], int, int, int);

int main()
{
	int n;
	cin >> n;
	long a[200][200];
	NhapMaTran(a, n);
	int u, v;
	cin >> u >> v;
	HoanVi2Cot(a, n, u, v);
	return 0;
}

void NhapMaTran(long a[][200], int& n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}


void HoanVi2Cot(long a[][200], int n, int c1, int c2)
{
	for (int i = 0; i < n; i++)
		swap(a[i][c1 - 1], a[i][c2 - 1]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}