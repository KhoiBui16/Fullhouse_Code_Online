/*
	C++ Buổi 07_Bài 04.Tính tổng và tích các phần tử.
	Cho mảng số nguyên A[] gồm N phần tử, hãy tính tổng, tích của các phần tử trong mảng và lấy dư với 10^9+7.
	
	Input Format
	Dòng 1 N là số lượng phần tử trong mảng. 
	Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống. (1<=N<=10^6; 0<=A[i]<=10^6).
	Output Format
	Dòng đầu tiên in ra tổng các phần tử trong mảng chia dư với 10^9 + 7,
	Dòng thứ hai in ra tích các phần tử trong mảng chia dư với 10^9 +7.

	Dữ liệu vào:
	10
	17952 6763 28600 2610 30928 2885 12203 2838 19245 20304
	Dữ liệu ra:
	144328
	706270049
*/

#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

#define MAX 1000000007
void NhapMang(ll[], int&);
ll TongDu(ll[], int);
ll TichDu(ll[], int);

// Xai ki thuat dong du (Modular)
int main()
{
	int n;
	cin >> n;
	ll a[100000];
	NhapMang(a, n);

	cout << TongDu(a, n) << endl;
	cout << TichDu(a, n);
	return 0;
}

void NhapMang(ll a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

ll TongDu(ll a[], int n)
{
	ll sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		sum %= MAX;
	}
	return sum % MAX;
}

ll TichDu(ll a[], int n)
{
	ll mul = 1;
	for (int i = 0; i < n; i++)
	{
		mul *= a[i];
		mul %= MAX;
	}
	return mul % MAX;
}