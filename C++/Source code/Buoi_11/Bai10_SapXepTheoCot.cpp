/*
	C++ Buổi 11_Bài 10.Sắp xếp các phần tử theo cột.
	Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử trong ma trận theo cột theo thứ tự tăng dần.

	Input Format
	Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số. (1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9)

	Output Format
	In ra ma trận sau khi đã sắp xếp theo cột tăng dần.

	Dữ liệu vào
	5
	1 2 3 4 5
	10 9 7 6 8
	23 12 2 14 15
	16 7 18 19 20
	25 24 23 22 1
	Dữ liệu ra:
	1 2 2 4 1
	10 7 3 6 5
	16 9 7 14 8
	23 12 18 19 15
	25 24 23 22 20
*/

#include <iostream>
#define MAX 100

using namespace std;

void EnterMatrix(long[][MAX], int&);
void Sort(long[], int);
void ExportMatrix(long[][MAX], int);

int main()
{
	// n is the size of row and column in matrix.
	int n;
	cin >> n;
	// The size of matrix is n x n.
	long matrix[MAX][MAX];
	EnterMatrix(matrix, n);
	ExportMatrix(matrix, n);

	return 0;
}

void EnterMatrix(long matrix[][MAX], int& n)
{
	// Enter value of matrix.
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> matrix[i][j];
}

void SortColumn(long matrix[][MAX], int k, int col)
{
	// use interchange sort
	long temp;
	for (int i = 0; i <= k - 2; i++)
	{
		for (int j = i + 1; j <= k - 1; j++)\
			// this change function can be used by Swap function in C++
			if (matrix[j][col] < matrix[i][col])
			{
				swap(matrix[i][col], matrix[j][col]);
				/*
				temp = matrix[i][col];
				matrix[i][col] = matrix[j][col];
				matrix[j][col] = temp;
				*/
			}
	}
}

void ExportMatrix(long matrix[][MAX], int k)
{
	// sorted in rows
	for (int j = 0; j < k; j++)
		SortColumn(matrix, k, j);
	// export matrix
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}
