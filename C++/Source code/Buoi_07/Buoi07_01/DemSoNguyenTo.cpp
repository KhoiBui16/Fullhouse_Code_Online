/*
	C++ Buổi 07_Bài 01.Đếm số nguyên tố.
	Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số nguyên tố trong mảng.

	Input Format
	Dòng đầu tiên là N : số lượng phần tử trong mảng;
	Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.(1<=N<=10^6; 0<=A[i]<=10^9)
	Output Format
	In ra các số lượng số nguyên tố trong dãy theo thứ tự xuất hiện.
	Nếu trong mảng không tồn tại số nguyên tố nào thì in ra "NONE".

	Dữ liệu vào:
	5
	1 3 23 5 8
	Dữ liệu ra:
	3
*/

#include <iostream>

using namespace std;

void NhapArray(long[], int&);
bool isPrimeNumbers(int);

int main()
{
	int n;
	cin >> n;
	const int N = 1000;
	long a[N];
	int cnt = 0;
	NhapArray(a, n);
	for (int i = 0; i < n; i++)
	{
		if (isPrimeNumbers(a[i]))
			++cnt;
	}
	if (!cnt)
		cout << "NONE";
	else
		cout << cnt;
	return 0;
}

void NhapArray(long a[], int& n)
{
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}

bool isPrimeNumbers(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (!(n % i)) 
			return false;
	}
	return true;
}