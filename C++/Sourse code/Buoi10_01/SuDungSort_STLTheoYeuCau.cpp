/*
	C++ Buổi 10_Bài 01.Sử dụng hàm Sort trong thư viện STL theo yêu cầu.
	Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự tăng dần sau đó giảm dần.

	Input Format
	Dòng đầu tiên là số nguyên dương N. 
	Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách. (1<=N<=10^5;-10^9<=A[i]<=10^9)

	Output Format
	Dòng dầu tiên in ra mảng theo thứ tự tăng dần.Dòng hai in ra mảng theo thứ tự giảm dần
	
	Dữ liệu vào:
	5
	14 -88 6 23 -14
	Dữ liệu ra:
	-88 -14 6 14 23 
	3 14 6 -14 -88
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(long, long);

int a[1000001];

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> a[i];

	sort(a + 0, a + n);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	sort(a + 0, a + n, cmp);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	return 0;
}

bool cmp(long a, long b)
{
	if (a > b)
		return true;
	return false;
}