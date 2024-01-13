/*
	C++ Buổi 07_Bài 06.Số lớn thứ nhất và lớn thứ 2.
	Cho mảng số nguyên A[] gồm N phần tử, tìm số lớn nhất và lớn thứ 2 trong mảng. 
	Chú ý 2 giá trị này có thể giống nhau.

	Input Format
	Dòng đầu tiên là N : số lượng phần tử trong mảng. 
	Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống. (2<=N<=10^6; 0<=A[i]<=10^6).
	Output Format
	In ra số lớn thứ nhất và lớn thứ 2 trong mảng.

	Dữ liệu vào:
	5
	41 18467 6334 26500 19169
	Dữ liệu ra:
	26500 19169
*/

#include <iostream>
#define ll long long

using namespace std;

void Nhap(ll[], ll&);
void MaxAndSecondNumbers(ll[], ll);

int main()
{
	ll n;
	cin >> n;
	ll a[1000];
	Nhap(a, n);
	MaxAndSecondNumbers(a, n);
	return 0;
}

void Nhap(ll a[], ll& n)
{
	for (ll i = 0; i < n; i++)
		cin >> a[i];
}

void MaxAndSecondNumbers(ll a[], ll n)
{
	ll max1 = -1e9, max2 = -1e9;
	for (ll i = 0; i < n; i++)
	{
		if (a[i] > max1)
		{
			max2 = max1;
			max1 = a[i];
		}
		else if (a[i] <= max1 && a[i] > max2)
			max2 = a[i];
	}
	cout << max1 << " " << max2;
}