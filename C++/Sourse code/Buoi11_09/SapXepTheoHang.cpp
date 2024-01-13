/*
	C++ Buổi 11_Bài 09.Sắp xếp các hàng của ma trận
	Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử của từng hàng của ma trận theo thứ tự tăng dần.

	Input Format
	Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số. (1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9)

	Output Format
	In ra ma trận sau khi sắp xếp.

	Dữ liệu vào:
	5
	1 2 3 4 5
	10 9 7 6 8
	11 12 13 14 15
	16 17 18 19 20
	25 24 23 22 21
	Dữ liệu ra:
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
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

void Sort(long matrix[], int k)
{
	// use interchange sort
	long temp;
	for (int i = 0; i <= k - 2; i++)
	{
		for (int j = i + 1; j <= k - 1; j++)\
			// this change function can be used by Swap function in C++
			if (matrix[i] > matrix[j])
			{
				temp = matrix[i];
				matrix[i] = matrix[j];
				matrix[j] = temp;
			}
	}
}

void ExportMatrix(long matrix[][MAX], int k)
{
	// sorted in rows
	for (int i = 0; i < k; i++)
		Sort(matrix[i], k);
	// export matrix
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < k; j++)
			cout << matrix[i][j] << " ";
		cout << endl;
	}
}

// solution2: Runtime Environment
// SortMatrixMinToMax(a, n);
// solution 2 is runtime Environment
// void Swap(long&, long&);
// void SortMatrixMinToMax(long[][MAX], int);

/*
void Swap(long& Num1, long& Num2)
{
	// Swap two numbers
	long temp = Num1;
	Num1 = Num2;
	Num2 = temp;
}

void SortMatrixMinToMax(long a[][MAX], int n)
{
	// Create 1D-array to store the value of each index in matrix
	int k;
	long b[MAX];
	// Set the first index of 1D-arry to 0
	k = 0;
	// Store the value from matrix to 1D-array
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			b[k++] = a[i][j];
	// Condition: 
	// If a position of the index at the moment is bigger than a position of the index on the right position
	// Swap them by interchange sort
	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++)
		if (b[i] > b[j])
			Swap(b[i], b[j]);
	// reset the index of 1D-array
	k = 0;
	// Return value from 1D-arry to matrix
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = b[k++];
	// Export the matrix
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
*/