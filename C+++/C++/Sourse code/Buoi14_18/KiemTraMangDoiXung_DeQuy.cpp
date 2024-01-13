/*
	C++ Buổi 14_Bài 18.Kiểm tra mảng đối xứng.
	Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có đối xứng hay không bằng cách sử dụng hàm đệ quy.

	Dữ liệu vào:
	Dòng đầu tiên là số nguyên dương N; 
	Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách. (1≤n≤1000; 1≤A[i]≤10^6)
	Dữ liệu ra:
	In ra YES nếu mảng A là mảng đối xứng, ngược lại in ra NO.

	Dữ liệu vào:
	10
	1 2 3 4 5 5 4 3 2 1
	Dữ liệu ra:
	YES
*/

#include <iostream>
using namespace std;

bool KtDoiXung(int[], int, int);

int main()
{
	int n;
	int a[1000];
	cin >> n;
	
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int kq = KtDoiXung(a, 0, n - 1);
	if (kq == 1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

bool KtDoiXung(int a[], int l, int r)
{
	while (l <= r)
	{
		if (a[l] != a[r])
			return false;
		return KtDoiXung(a, l + 1, r - 1);
	}
	return true;
}
