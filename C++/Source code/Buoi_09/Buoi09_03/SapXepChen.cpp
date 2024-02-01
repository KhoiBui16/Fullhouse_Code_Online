/*
	Buổi 09_Bài 03.Sắp xếp chèn.(Insertion sort).
	Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chèn.

	Input Format
	Dòng đầu tiên là số nguyên dương N. 
	Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.(1<=N<=10^3; 0<=A[i]<=10^9)

	Output Format
	n ra các bước của thuật toán sắp xếp chèn.


	Dữ liệu vào
	5
	41 18 64 20 9
	Dữ liệu ra:
	Buoc 1: 41 18 64 20 9
	Buoc 2: 18 41 64 20 9
	Buoc 3: 18 41 64 20 9
	Buoc 4: 18 20 41 64 9
	Buoc 5: 9 18 20 41 64
*/

#include <iostream>

using namespace std;

void InsertionSort(int[], int);

int main()
{
	int n;
	cin >> n;
	int a[1000];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	InsertionSort(a, n);
	return 0;
}

void InsertionSort(int a[], int n)
{
	int cnt = 1;
	cout << "Buoc " << cnt << ": ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cnt++;
	cout << endl;
	for (int i = 1; i < n; i++)
	{
		int temp = a[i];
		int j = i - 1;
		while (temp < a[j] && j >= 0)
		{
			a[j + 1] = a[j];
			--j;
		}
		a[j + 1] = temp;
		cout << "Buoc " << cnt << ": ";
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
		cnt++;
		if (i < n - 1)
			cout << endl;
	}
}