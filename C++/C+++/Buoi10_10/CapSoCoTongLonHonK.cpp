/*
	C++ Buổi 10_Bài 10.Cặp số có tổng lớn hơn k.
	Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng lớn hơn k.

	Input Format
	Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; 
	Dòng thứ 2 là n phần tử trong mảng. (2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6)

	Output Format
	In ra số lượng cặp số có tổng lớn hơn k.

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
int BinSearchVtDau(vector<int>&, int, int, int);
long long SlTongCapLonHonK(vector<int>&, int, int);

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	NhapMang(v, n);
	// sắp xếp mảng tăng dần
	sort(v.begin(), v.end());
	long long kq = SlTongCapLonHonK(v, n, k);
	cout << kq;
	return 0;
}

void NhapMang(vector<int>& v, int& n)
{
	for (int i = 0; i < n; i++)
		cin >> v[i];
}

int BinSearchVtDau(vector<int>& v, int Left, int Right, int x)
{
	int index = -1;
	while (Left <= Right)
	{
		int Mid = (Left + Right) / 2;
		if (v[Mid] > x)
		{
			index = Mid;
			Right = Mid - 1;
		}
		else
			Left = Mid + 1; // những v[Mid] <= x
	}
	return index;
}
long long SlTongCapLonHonK(vector<int>& v, int n, int k)
{
	// tìm vị trí đầu tiên của phần tử x = k - v[i] và xét từ vị trí i + 1 trở về sau thì tất cả những phần tử phía sau khi + với i sẽ có tổng > k vì đây là mảng tăng dần
	long long cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int x = k - v[i];
		int first = BinSearchVtDau(v, i + 1, n - 1, x);
		if (first != -1)
			cnt += ((n - 1) - first + 1);	// số lượng cặp = vị trí cuối - vtri i + 1 với i là số còn lại tạo thành cặp v[i] + x = k
	}
	return cnt;
}