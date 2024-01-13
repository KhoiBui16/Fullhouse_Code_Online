/*
	C++ Buổi 12_Bài 02.Nhân 2 ma trận.
	Cho ma trận A cỡ nxm, ma trận B cỡ mxp. Hãy tính ma trận tích của A và B.

	Input Format
	Dòng đầu tiên là 3 số n, m, p. 1≤n,m,p≤50; Các phần tử trong ma trận là số dương không quá 100000;

	Output Format
	In ra ma trận tích của A và B

	Dữ liệu vào
	3 4 5
	42 18 35 1
	20 25 29 9
	13 15 6 46
	2 8 5 1 10
	5 9 9 3 5
	6 6 2 8 2
	2 6 3 8 7

	Dữ liệu ra
	386 714 445 384 587
	357 613 410 399 446
	229 551 350 474 539
*/

#include <iostream>
#define l long

using namespace std;

void EnterArr(l[][100], l[][100], int&, int&, int&);
void MultiArr(l[][100], l[][100], int, int, int);

int main()
{
	int n, m, p;
	l MatrixA[100][100], MatrixB[100][100];
	EnterArr(MatrixA, MatrixB, n, m, p);
	MultiArr(MatrixA, MatrixB, n, m, p);

	return 0;
}

void EnterArr(l MatrixA[][100], l MatrixB[][100], int& n, int& m, int& p)
{
	cin >> n >> m >> p;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> MatrixA[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < p; j++)
			cin >> MatrixB[i][j];
}

void MultiArr(l MatrixA[][100], l MatrixB[][100], int n, int m, int p)
{
	l Multi[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < p; j++)
		{
			Multi[i][j] = 0;
			for (int h = 0; h < m; h++)
				Multi[i][j] += MatrixA[i][h] * MatrixB[h][j];
			cout << Multi[i][j] << " ";
		}
		cout << endl;
	}
}