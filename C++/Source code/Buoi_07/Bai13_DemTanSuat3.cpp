/*
	C++ Buổi 07_Bài 13.Đếm Tần Suất 3.
	Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, 
	nếu có nhiều giá trị có cùng số lần xuất hiện thì ta lấy số có giá trị nhỏ nhất

	Input Format
	Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng(1≤N≤1000, 1≤A[i]≤10^6).

	Output Format
	In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó.

	Dữ liệu vào
	6
	1 3 4 2 3 4
	
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
	int max = 0;
	int value = 0;
	for (int i = 0; i < n; i++)
	{
		if (cnt[a[i]] > max)
		{
			max = cnt[a[i]];
			value = a[i];
		}
		else if (cnt[a[i]] == max && a[i] < value)
		{
			value = a[i];
		}
	}
	cout << value << " " << cnt[value];
}