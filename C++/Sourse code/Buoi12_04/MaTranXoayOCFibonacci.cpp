/*
	C++ Buổi 12_Bài 04.Ma trận xoáy ốc Fibonacci.
	In ra ma trận xoáy ốc cấp N, với các số trong ma trận đều là các số trong dãy Fibonacci.

	Input Format
	Số nguyên dương N.(1≤N≤9)

	Output Format
	In ra ma trận xoáy ốc cấp N.

	Dữ liệu vào:
	4
	Dữ liệu ra:
	0 1 1 2
	89 144 233 3
	55 610 377 5
	34 21 13 8
*/

#include <iostream>
using namespace std;

long long fibo[100];

void Fibo()
{
	fibo[0] = 0, fibo[1] = 1;
	for (int i = 2; i <= 92; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
}


int main()
{
	int n;
	cin >> n;
	long long a[100][100];
	Fibo();

	int sr = 0, er = n - 1, sc = 0, ec = n - 1;
	int f = 0;
	while (sr <= er && sc <= ec)
	{
		for (int j = sc; j <= ec; j++)
			a[sr][j] = fibo[f++];
		++sr;

		for (int i = sr; i <= er; i++)
			a[i][ec] = fibo[f++];
		--ec;

		for (int j = ec; j >= sc; j--)
			a[er][j] = fibo[f++];
		--er;

		for (int i = er; i >= sr; i--)
			a[i][sc] = fibo[f++];
		++sc;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}

	return 0;
}