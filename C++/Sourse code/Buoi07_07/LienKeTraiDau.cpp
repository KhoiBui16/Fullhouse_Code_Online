/*
	C++ Buổi 07_Bài 07.Liền kề trái dấu.
	Cho mảng số nguyên A[] gồm N phần tử, 
	Hãy liệt kê theo thứ tự xuất hiện các số thỏa mãn có ít nhất 1 số trái dấu với nó đứng cạnh nó.

	Input Format
	Dòng đầu tiên là N số lượng phần tử trong mảng. 
	Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống. (2<=N<=10^6; -10^6<=A[i]<=10^6)
	Output Format
	In ra kết quả của bài toán.

	Dữ liệu vào:
	5
	-1 2 -3 4 4
	Dữ liệu ra:
	-1 2 -3 4
*/

#include <iostream>

using namespace std;

void Nhap(long long[], int&);
void LienKeTraiDau(long long[], int);

int main()
{
	int n;
	cin >> n;
	long long a[500];
	Nhap(a, n);
	LienKeTraiDau(a, n);
	return 0;

}

void Nhap(long long a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void LienKeTraiDau(long long a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0)
			cout << a[i] << " ";
	}
}