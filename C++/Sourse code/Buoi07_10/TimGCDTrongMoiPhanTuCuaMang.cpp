/*
	C++ Buổi 07_Bài 10.Tìm gcd của mọi phần tử trong mảng.
	Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất mà mọi số trong mảng đều chia hết cho số đó.
	
	Input Format
	Dòng đầu tiên là N : số lượng phần tử trong mảng; 
	Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.(1≤N≤10^6 , 1≤A[i]≤10^6).
	Output Format
	In ra kết quả của bài toán.

	Dữ liệu vào:
	10
	2 4 22 200 8 2222 200000 44 8 8
	Dữ liệu ra:
	2
*/

#include <iostream>

using namespace std;

void EnterInput(int[], int&);
int Gcd(int, int);
void GcdOfEachIndex(int[], int);

int main()
{
	int n;
	cin >> n;
	int a[500];
	EnterInput(a, n);
	GcdOfEachIndex(a, n);
	return 0;
}

void EnterInput(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int Gcd(int a, int b)
{
	while (b)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void GcdOfEachIndex(int a[], int n)
{
	int x = a[0];
	for (int i = 0; i < n; i++)
		x = Gcd(x, a[i]);
	cout << x;
}