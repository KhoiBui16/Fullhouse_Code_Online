/*
	C++ Buổi 10_Bài 09.Cặp số có tổng nhỏ hơn K.
	Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng nhỏ hơn k.

	Input Format
	Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k. Dòng thứ 2 là n phần tử trong mảng. (2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6)

	Output Format
	In ra số lượng cặp số có tổng nhỏ hơn k.

	Dữ liệu vào:
	5 4
	2 3 1 2 2
	Dữ liệu ra:
	3
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void NhapMang(vector<int>&, int&);
int BinSearchVtCuoi(vector<int>&, int, int, int);
long long SLTongCapNhoHonK(vector<int>&, int, int);

int main()
{
	// Thêm 2 dòng code này thì đọc vector sẽ nhanh hơn vì các lý do sau đây
	// trong CP (competive programming) thì hàm scanf/printf nhanh hơn cin/cout 
	// => dùng 2 dòng lệnh này để tăng tốc độ đọc vector
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	// khai báo mảng động
	vector<int> v(n);
	NhapMang(v, n);
	// sáp xếp lại mảng tăng dần bằng thuật toán sort => áp dụng thuật toán binary search tối ưu
	sort(v.begin(), v.end());
	long long kq = SLTongCapNhoHonK(v, n, k);
	cout << kq;
	return 0;
}

void NhapMang(vector<int>& v, int& n)
{
	for (int i = 0; i < n; i++)
		cin >> v[i];
}

int BinSearchVtCuoi(vector<int>& v, int Left, int Right, int x)
{
	int index = -1;
	while (Left <= Right)
	{
		int Mid = (Left + Right) / 2;
		// kiểm tra vị trí cuối cùng của phần tử < x
		if (v[Mid] < x)
		{
			index = Mid;
			Left = Mid + 1;
		}
		else
			Right = Mid - 1; // trường hợp còn lại v[Mid] >= x
	}
	return index;
}

long long SLTongCapNhoHonK(vector<int>& v, int n, int k)
{
	long long cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int x = k - v[i];
		// tìm được vị trí cuối cùng của phần tử < x
		int last = BinSearchVtCuoi(v, i + 1, n - 1, x);
		// kiểm tra vị trí cuối cùng của cặp còn lại có tồn tại hay không
		if (last != -1)
			cnt += last - (i + 1) + 1;
	}
	return cnt;
}