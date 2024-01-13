/*
	C++ Buổi 07_Bài 08.Số lớn hơn các số đứng trước.
	Cho một dãy số nguyên dương có n phần tử. Hãy liệt kê số các phần tử trong dãy lớn hơn tất cả các số đứng trước nó.
	
	Input Format
	Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.(2≤n≤10^6; 1≤ai≤10^9)
	Output Format
	Liệt kê các số thỏa mãn.

	Dữ liệu vào:
	5
	1 3 3 4 9
	Dữ liệu ra:
	1 3 4 9
*/

#include <iostream>

using namespace std;

void Nhap(int[], int&);
void SoLonHon(int[], int);

int main()
{
	int n;
	cin >> n;
	int a[500];
	Nhap(a, n);
	SoLonHon(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void SoLonHon(int a[], int n)
{
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			cout << a[i] << " ";
			max = a[i];
		}
	}
}
