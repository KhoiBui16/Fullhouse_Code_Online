/*
	C++ Buổi 11_Bài 05.Số thuận nghịch trong tam giác dưới.
	Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số thuận nghịch thuộc tam giác dưới của ma trận trên.

	Input Format
	Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số. 1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9.

	Output Format
	In ra số lượng số thuận nghịch trong ma trận.

	Dữ liệu vào:
	5
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
	Dữ liệu ra:
	5
*/

#include <iostream>
#define MAX 50

using namespace std;

void EnterArr(long[][MAX], int&);
bool isReverse(long);
int CountRevNum(long[][MAX], int);

int main()
{
	int n;
	cin >> n;
	long a[MAX][MAX];
	EnterArr(a, n);
	cout << CountRevNum(a, n);
	return 0;
}

void EnterArr(long a[][MAX], int& n)
{
	// enter your array
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}

bool isReverse(long k)
{
	// check reversed numbers
	long rev = 0;
	long temp = k;
	while (k != 0)
	{
		rev = rev * 10 + k % 10;
		k /= 10;
	}
	return (rev == temp);
}

int CountRevNum(long a[][MAX], int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j <= i; j++)
			if (isReverse(a[i][j]))
				cnt++;
	return cnt;
}