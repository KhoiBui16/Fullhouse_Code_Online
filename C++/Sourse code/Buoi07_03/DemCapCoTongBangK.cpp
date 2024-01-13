/*
	C++ Buổi 07_Bài 03.Đếm cặp có tổng bằng k.
	Cho mảng số nguyên A[] gồm N phần tử, hãy đếm cặp 2 phần tử(không xét đến thứ tự) trong mảng có tổng bằng K cho trước

	Input Format
	Dòng đầu tiên là N và K: số lượng phần tử trong mảng và số nguyên K; 
	Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.(1<=N<=1000; 0<=A[i], K<=1000)
	Output Format
	In ra số lượng cặp số có tổng bằng K.

	Dữ liệu vào:
	10 63
	44 506 349 555 210 757 503 419 19 515
	Dữ liệu ra:
	1
*/

#include <iostream>

using namespace std;

void EnterInput(int[], int&);
int CheckSumPairNumbers(int[], int, int);

int main()
{
	int n, k;
	cin >> n >> k;
	int a[500];
	EnterInput(a, n);
	cout << CheckSumPairNumbers(a, n, k);
	return 0;
}

void EnterInput(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int CheckSumPairNumbers(int a[], int n, int k)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] + a[j] == k)
				++cnt;
	return cnt;
}