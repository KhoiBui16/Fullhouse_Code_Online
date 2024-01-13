/*
	C++ Buổi 10_Bài 08.Cặp số có tổng bằng K.
	Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng bằng k.

	Input Format
	Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng. (2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6)

	Output Format
	In ra số lượng cặp số có tổng bằng k.

	Dữ liệu vào:
	5 4
	2 3 1 2 2
	Dữ liệu ra:
	4
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void NhapMang(vector<int>&, int&);
int BinSearchVtDau(vector<int>&, int, int, int);
int BinSearchVtCuoi(vector<int>&, int, int, int);
long long TongCapBangK(vector<int>&, int, int);
	
	// Cách 1 xài vector
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
	long long kq = TongCapBangK(v, n, k);
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
		if (v[Mid] == x)
		{
			index = Mid;
			Right = Mid - 1;
		}
		else if (v[Mid] < x)
			Left = Mid + 1;
		else
			Right = Mid - 1;
	}
	return index;
}

int BinSearchVtCuoi(vector<int>& v, int Left, int Right, int x)
{
	int index = -1;
	while (Left <= Right)
	{
		int Mid = (Left + Right) / 2;
		if (v[Mid] == x)
		{
			index = Mid;
			Left = Mid + 1;
		}
		else if (v[Mid] < x)
			Left = Mid + 1;
		else
			Right = Mid - 1;
	}
	return index;
}

long long TongCapBangK(vector<int>& v, int n, int k)
{
	long long cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int x = k - v[i];
		int first = BinSearchVtDau(v, i + 1, n - 1, x);
		int last = BinSearchVtCuoi(v, i + 1, n - 1, x);
		if (first != -1)
			cnt += (last - first + 1);
	}
	return cnt;
}

/*		Cách 2 xài mảng
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void NhapMang(int[], int&);
int BinSearchVtDau(int[], int, int, int);
int BinSearchVtCuoi(int[], int, int, int);
long long TongCapBangK(int[], int, int);

int main()
{
	int n, k;
	cin >> n >> k;
	int a[100000];
	NhapMang(a, n);
	long long kq = TongCapBangK(a, n, k);
	cout << kq;
	return 0;
}

void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int BinSearchVtDau(int a[], int Left, int Right, int x)
{
	int index = -1;
	while (Left <= Right)
	{
		int Mid = (Left + Right) / 2;
		if (a[Mid] == x)
		{
			index = Mid;
			Right = Mid - 1;
		}
		else if (a[Mid] < x)
			Left = Mid + 1;
		else
			Right = Mid - 1;
	}
	return index;
}

int BinSearchVtCuoi(int a[], int Left, int Right, int x)
{
	int index = -1;
	while (Left <= Right)
	{
		int Mid = (Left + Right) / 2;
		if (a[Mid] == x)
		{
			index = Mid;
			Left = Mid + 1;
		}
		else if (a[Mid] < x)
			Left = Mid + 1;
		else
			Right = Mid - 1;
	}
	return index;
}

long long TongCapBangK(int a[], int n, int k)
{
	// sắp xếp lại mảng tăng dần để dùng tìm kiếm nhị phân
	sort(a + 0, a + n);
	long long cnt = 0;
	// chỉ duyệt qua n - 1 phần tử cuối cùng và đếm các cặp có tổng bằng k
	for (int i = 0; i < n; i++)
	{
		// x là phần tử còn lại trong cặp có tổng với a[i] bằng k => nghĩa là x + a[i] = k
		int x = k - a[i];
		// qua mỗi i thì ta sẽ tìm được số lượng x phía sau i 
		// => nghĩa là số lần xuất hiện của x từ i + 1 (để không bị trùng lặp) tương ứng với số cặp có tổng với phần tử i bằng k  trong mảng
		// Tìm số lượng phần tử x trong mảng từ i + 1 -> n - 1
		// Để tìm số lượng phần tử trong khoảng [i + 1, n - 1] ta sẽ tìm vị trí đầu tiên và vị trí cuối cùng của x trong khoảng đó bằng Binary Search để độ phức tạp là O(logN)
		int first = BinSearchVtDau(a, i + 1, n - 1, x);
		int last = BinSearchVtCuoi(a, i + 1, n - 1, x);
		// kiểm tra có tổn tại giá trị còn lại trong cặp i + x = k hay không
		if (first != -1 && last != -1)
			cnt += (last - first + 1);
	}
	return cnt;
}
*/

/*
	// Cách 3 xài Map
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
	int n; int k; cin >> n >> k;
	int a[n];
	map <int , int> mp;
	for (int i=0; i<n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	int ans = 0;
	for (int i=0; i<n; i++)
	{
		ans += mp[k-a[i]];
		if (a[i] * 2 == k) ans--;
	}
	cout << ans / 2;
*/