/*
	C++ Buổi 07_Bài 09.Đếm cặp số nguyên tố cùng nhau.
	Cho một dãy số nguyên dương có n phần tử. Hãy đếm các cặp số nguyên tố cùng nhau trong mảng.
	
	Input Format
	Dòng đầu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử ai trong mảng(1≤n≤1000; 1≤ai≤10^9).
	Output Format
	In ra số lượng cặp số nguyên tố cùng nhau trong mảng.

	Dữ liệu vào:
	5
	2 4 3 6 7
	Dữ liệu ra:
	6
*/

#include <iostream>
#define ll long long

using namespace std;

void EnterArray(long[], int&);
ll GCD(int, int);
int CoPrimeNumbers(long[], int);

int main()
{
	int n;
	cin >> n;
	long a[500];
	EnterArray(a, n);
	cout << CoPrimeNumbers(a, n);
	return 0;
}

void EnterArray(long a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

ll GCD(int a, int b)
{
	while (b)
	{
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int CoPrimeNumbers(long a[], int n)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (GCD(a[i], a[j]) == 1)
				++cnt;
	return cnt;
}