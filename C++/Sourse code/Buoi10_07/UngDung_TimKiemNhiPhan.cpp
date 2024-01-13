/*
	C++ Buổi 10_Bài 07.Ứng dụng tìm kiếm nhị phân.
	Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần.
	Hãy viết các hàm tìm kiếm sau với độ phức tạp O(logN) :

	1.Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1.
	2.Tìm vị trí(tính từ 0)xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra.
	3.Tìm vị trí(tính từ 0) xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1.
	4.Tìm vị trí(tính từ 0) xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1.
	5.Tìm số lần xuất hiện của phần tử X trong mảng thông qua kết quả của hàm 1 và 2.

	Input Format
	Dòng đầu tiên là số nguyên dương N và X
	Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.(1<=N<=10^6; 0<=A[i],X<=10^6)

	Output Format
	In ra 4 kết quả của 4 hàm đề bài yêu cầu.

	Dữ liệu vào:
	10 41
	41 41 11478 15724 18467 19169 24464 26500 26962 29358
	Dữ liệu ra:
	0
	1
	0
	2
	2
*/

#include <iostream>
using namespace std;

void NhapMang(int[], int&);
int BinarySearch_VtriDau(int[], int, int);
int BinarySearch_VtriCuoi(int[], int, int);
int BinarySearch_VtriDauTienLonHonBangX(int[], int, int);
int BinarySearch_VtriDauTienLonHonX(int[], int, int);

int main()
{
	int n, x;
	cin >> n >> x;
	int a[100000];
	NhapMang(a, n);
	int kq1 = BinarySearch_VtriDau(a, n, x);
	int kq2 = BinarySearch_VtriCuoi(a, n, x);
	int kq3 = BinarySearch_VtriDauTienLonHonBangX(a, n, x);
	int kq4 = BinarySearch_VtriDauTienLonHonX(a, n, x);

	cout << kq1 << "\n" << kq2 << "\n" << kq3 << "\n" << kq4 << "\n";
	// dùng kq1 và kq2 để tính kq5 => kq5 = kq2 - kq1 + 1: kiến thức đếm số phần tử trong đoạn [L, R] = R - L + 1
	int First = kq1;
	int Last = kq2;
	// độ phúc tạp O(1)
	int kq5 = Last - First + 1;
	// Nếu mà không tìm thấy phần tử đầu tiên => sẽ không có phần tử cuối cùng
	if (First == -1)
		cout << "0";
	else
		cout << kq5;
	return 0;
}

void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int BinarySearch_VtriDau(int a[], int n, int x)
{
	int L = 0;
	int R = n - 1;
	int res = -1;
	while (L <= R)
	{
		int M = (L + R) / 2;
		if (a[M] == x)
		{
			// vị trí tiềm năng
			res = M;
			// kiểm tra trước đó tới đầu mảng còn vị trí tiềm năng nào hay không => dịch trái để tìm vị trí đầu tiên
			R = M - 1;
		}
		else if (a[M] < x)
			L = M + 1;
		else
			R = M - 1;
	}
	return res;
}

int BinarySearch_VtriCuoi(int a[], int n, int x)
{
	int L = 0;
	int R = n - 1;
	int res = -1;
	while (L <= R)
	{
		int M = (L + R) / 2;
		if (a[M] == x)
		{
			// ví trí tìêm năng
			res = M;
			// kiểm tra xem bên phải còn phần tử nào trùng với x hay không để tìm vị trí tiềm năng => dịch sang phải để tìm vị trí cuối cùng
			L = M + 1;
		}
		else if (a[M] < x)
			L = M + 1;
		else
			R = M - 1;
	}
	return res;
}

int BinarySearch_VtriDauTienLonHonBangX(int a[], int n, int x)
{
	int L = 0;
	int R = n - 1;
	int res = -1;
	while (L <= R)
	{
		int M = (L + R) / 2;
		if (a[M] >= x)
		{
			res = M;
			R = M - 1;
		}
		else // a[M] < x
			L = M + 1;
	}
	return res;
}

int BinarySearch_VtriDauTienLonHonX(int a[], int n, int x)
{
	int L = 0;
	int R = n - 1;
	int res = -1;
	while (L <= R)
	{
		int M = (L + R) / 2;
		if (a[M] > x)
		{
			res = M;
			R = M - 1;
		}
		else // a[M] <= x
			L = M + 1;
	}
	return res;
}


