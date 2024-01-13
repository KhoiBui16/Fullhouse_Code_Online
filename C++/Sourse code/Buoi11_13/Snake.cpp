/*
	C++ Buổi 11_Bài 13.Snake.
	Cho ma trận vuông A[N][N]. Hãy in các phần tử thuộc theo hình con rắn.
	Input Format
	Dòng đầu tiên đưa vào N là cấp của ma trận A[N][N]; 
	N dòng tiếp mỗi dòng gồm N số nguyên.(1≤N≤100; 0≤A[i][j]≤1000000)

	Output Format
	In ra ma trận theo yêu cầu.

	Dữ liệu vào:
	3
	1 2 3
	4 5 6
	7 8 9

	Dữ liệu ra:
	1 2 3
	6 5 4
	7 8 9
*/

#include <iostream>
using namespace std;

void NhapMaTran(int[][100], int&);
void SnakeMatrix(int[][100], int);

int main()
{
	int n;
	cin >> n;
	int a[100][100];
	NhapMaTran(a, n);
	SnakeMatrix(a, n);

	return 0;
}

void NhapMaTran(int a[][100], int& n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

void SnakeMatrix(int a[][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < n; j++)
				cout << a[i][j] << " ";
		}
		else
		{
			for (int j = n - 1; j >= 0; j--)
				cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

