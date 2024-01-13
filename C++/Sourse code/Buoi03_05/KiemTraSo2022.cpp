/*
	C++ Buổi 03_Bài 05.Kiểm tra số 2022.
	Nhập vào 1 dãy số có không quá 10000 số nguyên.
	Hãy xác định trong quá trình nhập có xuất hiện số 2022 hay không?
	1≤N≤10000.Các số được nhập là số nguyên không quá 10^6.
	In ra YES nếu có năm 2022,ngược lai in ra NO.

	Dữ liệu vào:
	4
	1234 2022 2011 2022
	Dữ liệu ra:
	YES
*/

#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[500];

	for (int i = 0; i < n; i++)
		cin >> a[i];
	int dem = 0;

	for (int i = 0; i < n; i++)
		if (a[i] == 2022) ++dem;

	if (dem >= 1) 
		cout << "YES";
	else 
		cout << "NO";
	return 0;
}