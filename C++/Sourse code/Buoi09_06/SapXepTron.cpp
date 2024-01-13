/*
	C++ Buổi 09_Bài 06.Thuật toán sắp xếp trộn(Merge Sort).
	Cho mảng số nguyên A[] có N phần tử, hãy in mảng tăng dần sau khi dùng thuật toán sắp xếp trộn.

	Input Format
	Dòng đầu tiên là số nguyên dương N. 
	Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.(1<=N<=10^5; -10^7<=A[i]<=10^7)

	Output Format
	In ra các bước của thuật toán sắp xếp đếm phân phối.

	Dữ liệu vào:
	6
	856 19282 7149 27315 19984 16539
	Dữ liệu ra:
	856 7149 16539 19282 19984 27315
*/

#include <iostream>

using namespace std;

void Mix(int[], int, int[], int, int[], int&);
void Merge(int [], int, int, int);
void MergeSort(int [], int, int);
void SapTang(int[], int);

int a[1000001];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	SapTang(a, n);
	return 0;
}

void Mix(int a[], int n, int b[], int m, int c[], int& p)
{
	int i = 0;
	int j = 0;
	p = 0;
	while (!(i >= n && j >= m))
	{
		if (i < n && j < n && a[i] < b[j] || j >= m)
			c[p++] = a[i++];
		else
			c[p++] = b[j++];
	}
}

/*	Cách code cơ bản chưa tối ưu
void Merge(int a[], int Left, int Mid, int Right)
{
	// tạo mảng b chứa các phần tử của đoạn a[Left]->a[Mid]
	int* b = new int[Mid - Left + 1];
	int k; // số phần tu của mảng b
	// tạo mảng c chứa các phần tử của đoạn a[Mid + 1]->a[Right]
	int* c = new int[Right - Mid];
	int l; // số phần tử của mảng c
	// tạo mảng temp chứa các phần tử đã sắp xếp
	int* temp = new int[Right - Left + 1];
	int m; // số phần tử của mảng temp

	// không gian con thứ nhất
	k = 0;
	for (int i = Left; i <= Mid; i++)
		b[k++] = a[i];
	// không gian con thứ hai
	l = 0;	
	for (int i = Mid + 1; i <= Right; i++)
		c[l++] = a[i];

	Mix(b, k, c, l, temp, m);
	for (int i = 0; i < m; i++)
		a[Left + i] = temp[i];
	// giải phóng bộ nhớ bằng hàm delete khi cấp phát bộ nhơ động
	delete[] b;
	delete[] c;
	delete[] temp;
}
*/
	// Cải tiến hàm Merge
void Merge(int a[], int Left, int Mid, int Right)
{
	int* temp = new int[Right - Left + 1];
	int m;
	// biến i duyệt trên không gian con thứ nhất từ Left -> Mid
	int i = Left;
	// biến j duyệt trên không gian con thứ hai từ Mid + 1 -> Right
	int j = Mid + 1;

	m = 0;
	// điều kiện dừng: i > Mid && j > Right => lấy phủ định ra điều kiện dừng
	while (!(i > Mid && j > Right))
	{
		if (i <= Mid && j <= Right && a[i] < a[j] || j > Right)
			temp[m++] = a[i++];
		else
			temp[m++] = a[j++];
	}

	// Trộn các phần tử tử mang temp vào mảng a
	for (int i = 0; i < m; i++)
		a[Left + i] = temp[i];
	// giải phóng bộ nhớ bằng hàm delete khi cấp phát bộ nhơ động
	delete[] temp;
}

void MergeSort(int a[], int Left, int Right)
{
	if (Left < Right)	// đoạn cần sắp có nhiều hơn 1 phần tử
	{
		int Mid = (Left + Right) / 2;
		MergeSort(a, Left, Mid);	// sắp xếp đoạn a[Left] -> a[Mid]
		MergeSort(a, Mid + 1, Right);	// sắp xếp đoạn a[Mid + 1] -> a[Right]
		Merge(a, Left, Mid, Right);	// trộn 2 đoạn đã sắp xếp
	}
}

void SapTang(int a[], int n)
{
	MergeSort(a, 0, n - 1);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
