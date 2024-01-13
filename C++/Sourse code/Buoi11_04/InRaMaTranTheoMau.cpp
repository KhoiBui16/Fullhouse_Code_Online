/*
	C++ Buổi 11_Bài 04.In ra ma trận theo mẫu.
	Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. 
	Hãy in ra ma trận theo các mẫu dưới đây.

	Input Format
	Dòng đầu tiên là số N. 
	N dòng tiếp theo mỗi dòng có N số. 
	(1≤n≤100; Các phần tử trong ma trận là số dương không quá 10^9)

	Output Format
	In ra ma trận theo mẫu.

	Dữ liệu vào:
	5
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25

	Dữ liệu ra:
	Hinh 1:
	1 6 11 16 21
	2 7 12 17 22
	3 8 13 18 23
	4 9 14 19 24
	5 10 15 20 25
	Hinh 2:
	25 24 23 22 21
	20 19 18 17 16
	15 14 13 12 11
	10 9 8 7 6
	5 4 3 2 1
	Hinh 3:
	5 10 15 20 25
	4 9 14 19 24
	3 8 13 18 23
	2 7 12 17 22
	1 6 11 16 21
	Hinh 4:
	5 4 3 2 1
	10 9 8 7 6
	15 14 13 12 11
	20 19 18 17 16
	25 24 23 22 21
*/

#include <iostream>
using namespace std;

void NhapMaTran(long[][100], int&);
void InMaTranTheoMau(long[][100], int);

int main()
{
	int n;
	cin >> n;
	long a[100][100];
	NhapMaTran(a, n);
	InMaTranTheoMau(a, n);

	return 0;
}

void NhapMaTran(long a[][100], int& n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void InMaTranTheoMau(long a[][100], int n)
{
	// Hình 1;
	cout << "Hinh 1:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[j][i] << " ";
		cout << endl;
	}
	// Hình 2:
	cout << "Hinh 2:\n";
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = n - 1; j >= 0; j--)
			cout << a[i][j] << " ";
		cout << endl;
	}

	// Hình 3:
	cout << "Hinh 3:\n";
	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = 0; j < n; j++)
			cout << a[j][i] << " ";
		cout << endl;
	}

	// Hình 4: 
	cout << "Hinh 4:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j >= 0; j--)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
