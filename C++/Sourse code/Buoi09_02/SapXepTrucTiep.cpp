/*
	C++ Buổi 09_Bài 02.Sắp xếp đổi chỗ trực tiếp.(Interchange sort)
	Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp đổi chỗ trực tiếp.

	Input Format
	Dòng đầu tiên là số nguyên dương N. 
	Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.(1<=N<=10^3; 0<=A[i]<=10^9)

	Output Format
	In ra các bước của thuật toán sắp xếp đổi chỗ trực tiếp.

	Dữ liệu vào
	5
	41 18 64 20 9
	Dữ liệu ra
	Buoc 1: 9 41 64 20 18
	Buoc 2: 9 18 64 41 20
	Buoc 3: 9 18 20 64 41
	Buoc 4: 9 18 20 41 64
*/

#include <iostream>

using namespace std;

void NhapMang(int[], int&);
void SapXepTrucTiep(int[], int);

int main()
{
	int n;
	cin >> n;
	int a[1000];
	NhapMang(a, n);
	SapXepTrucTiep(a, n);
	return 0;
}

void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}


void SapXepTrucTiep(int a[], int n)
{
	int cnt = 1;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
		cout << "Buoc " << cnt << ": ";
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cnt++;
		cout << endl;
	}
}