/*
	C++ Buổi 07_Bài 17.Mảng đối xứng.
	Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay không?
	
	Input Format
	Dòng đầu tiên là N : số lượng phần tử trong mảng. 
	
	Output FormatDòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống. (1<=N<=10^6; 0<=A[i]<=10^6)
	In ra YES hoặc NO tương ứng với mảng đối xứng hoặc không.

	Dữ liệu vào:
	10
	1 2 3 4 5 5 4 3 2 1
	Dữ liệu ra:
	YES
*/

#include <iostream>

using namespace std;

void NhapMang(int[], int&);
bool KtDoiXung(int[], int);

int main()
{
	int n;
	cin >> n;
	int a[10000];
	NhapMang(a, n);
	if (KtDoiXung(a, n) == true)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}

void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

bool KtDoiXung(int a[], int n)
{
	for (int i = 0; i < n / 2; i++)
		if (a[i] != a[n - i - 1])
			return false;
	return true;
}