/*
	C++ Buổi 11_Bài 11.Phần tử xuất hiện ở mọi hàng.
	Cho ma trận vuông A[N][N]. Hãy in ra các số xuất hiện ở mọi hàng theo thứ tự từ bé đến lớn, mỗi giá trị xuất hiện chỉ liệt kê 1 lần.

	Input Format
	Dòng đầu tiên đưa vào N là cấp của ma trận A[N][N]; 
	N dòng tiếp mỗi dòng gồm N số nguyên. (1≤N≤100; 0≤A[i][j]≤100)

	Output Format
	In ra các giá trị xuất hiện trên mọi dòng của ma trận, các số in cách nhau một dấu cách.
	Nếu không tồn tại giá trị nào thỏa mãn in ra "NOT FOUND".

	Dữ liệu vào:
	5
	1 2 3 4 5
	10 9 1 6 2
	1 12 2 14 15
	16 2 18 19 1
	2 24 23 22 1

	Dữ liệu ra:
	1 2
*/

/*
	Hướng giải
	Cách làm bài này như sau :
	Nếu muốn a xuất hiện ở n hàng  thì a phải xuất hiện ở  hàng n và n-1 hàng trước đó
	Ta sẽ tạo 1 mảng để đánh dấu các phần tử đã xuất hiện ở các hàng trước đó

	int mark [101] = {0};
	Đầu tiên ta sẽ đánh dấu tất phần tử xuất hiện trong hàng đầu tiên
	mark[A[0][j]=1;

	Duyệt qua các phần tử ở hàng 2:
		Nếu markA1j=1 thì mark [A[1][j]] = 2 
	(có nghĩa là phần tử A[1][j] đã xuất hiện ở hàng 2 và 2-1 hàng phía trước )

	Duyệt qua các phần tử ở hàng 3:
		Nếu mark[A[2][j]=2 thì mark [A[2][j]] = 3 
	(có nghĩa là phần tử A[2][j] đã xuất hiện ở hàng 3 và 3-1 hàng phía trước )
	………
	Cuối cùng duyệt các giá trị trong mark, 
	nếu mark[i] = n tức là có mặt trong n hàng thì in ra i;
*/

#include<iostream>
using namespace std;

	// Cách 1 xài mảng đánh dấu
int main() {
	int n; 
	cin >> n;
	int A[100][100];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> A[i][j];

	int mark[100000] = { 0 };
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (mark[A[i][j]] == i) 
				mark[A[i][j]] += 1;

	int ok = false;
	for (int i = 0; i < 100000; i++) 
	{
		if (mark[i] == n) 
		{ 
			cout << i << " "; 
			ok = true;
		}
	}
	if (ok == false) cout << "NOT FOUND";

	return 0;
}



/*	Cách 2 Xài map
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	int n;;
	cin >> n;
	int a[100 + 1][100 + 1];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> a[i][j];

	// Khái báo map để lưu giá trị
	map<int, int> mp;
	// map.first la số phần tử cần xết
	// map.second là key để mình đánh dấu phần tử này xuất hiện ở hàng mấy cột mấy

	// Xài map để lưu những phần tử ở hàng 1
	for (int j = 1; j <= n; j++)
	{
		// những phần tử xuất hiện ở hàng 1
		mp[a[1][j]] = 1;
	}

	// bắt đầu duyệt từ hàng thứ 2
	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (mp[a[i][j]] == i - 1)
				// value dược lưu vào map
				mp[a[i][j]] = i;

	bool ok = false;
	// duyệt map
	for (auto it : mp)
	{
		if (it.second == n)
		{
			cout << it.first << " ";
			ok = true;
		}
	}

	if (ok == false)
		cout << "NOT FOUND";
	return 0;
}
*/