/*
	C++ Buổi 07_Bài 12.Đếm Tần Suất 2.
	Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, 
	nếu có nhiều giá trị có cùng số lần xuất hiện thì lấy giá trị xuất hiện trước theo thứ tự trong mảng

	Input Format
	Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng(1≤N≤1000, 1≤A[i]≤10^6).

	Output Format
	In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó.

	Dữ liệu vào
	6
	3 1 4 3 5 4
	Dữ liệu ra
	3 2
*/

#include <iostream>
#define MAX 10000001

using namespace std;

void NhapMang(int[], int&);
void DemTanSuat(int[], int);

int cnt[MAX];

int main()
{
	int n;
	int a[1000000];
	cin >> n;
	NhapMang(a, n);
	DemTanSuat(a, n);

	return 0;
}

void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		cnt[a[i]]++;
	}
}

void DemTanSuat(int a[], int n)
{
	int lc = a[0];
	for (int i = 0; i < n; i++)
		if (cnt[a[i]] > cnt[lc])
			lc = a[i];
	cout << lc << " " << cnt[lc];
}