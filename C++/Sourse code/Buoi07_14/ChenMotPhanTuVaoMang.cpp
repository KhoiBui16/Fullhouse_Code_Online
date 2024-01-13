/*
	C++ Buổi 07_Bài 14.Chèn một phần tử vào mảng.
	Cho mảng số nguyên A[] gồm n phần tử, nhiệm vụ của bạn là chèn phần tử x vào vị trí index(Tính từ 1) trong mảng 
	sau đó in ra mảng.

	Input Format
	Dòng đầu tiên là 3 số nguyên dương n, x, index; 
	Dòng thứ 2 gồm n số nguyên viết cách nhau một vài khoảng trắng.(1≤N,index≤1000, 1≤A[i],X≤10^6).

	Output Format
	In ra mảng sau khi chèn

	Dữ liệu vào
	6 5 4
	1 3 4 2 3 4

	Dữ liệu ra
	1 3 4 5 2 3 4
*/

	// Cách 1
#include <iostream>

using namespace std;

void NhapMang(int[], int&);
void ChenPhanTu(int[], int, int, int);

int main()
{
	int n, x, index;
	cin >> n >> x >> index;
	int a[10000];
	NhapMang(a, n);
	ChenPhanTu(a, n, x, index);
	return 0;
}

void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void ChenPhanTu(int a[], int n, int x, int index)
{
	for (int i = n; i >= index; i--)
		a[i] = a[i - 1];
	a[index - 1] = x;
	n++;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}

/*	Cách 2
#include <iostream>
using namespace std;

void NhapMang(int[], int&);
void ChenPhanTu(int[], int,int, int);

int main()
{
	int n, x, index;
	cin >> n >> x >> index;
	int a[100];
	NhapMang(a, n);
	++n; // tăng kích thước mảng
	ChenPhanTu(a, n, x, index);
	return 0;
}

void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void ChenPhanTu(int a[], int n, int x, int index)
{
	for (int i = n - 1; i >= index - 1; i--)
		a[i] = a[i - 1];
	a[index - 1] = x;
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
*/