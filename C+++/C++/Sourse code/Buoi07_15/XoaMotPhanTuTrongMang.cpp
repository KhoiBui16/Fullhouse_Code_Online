/*
	C++ Buổi 07_Bài 15.Xóa đi một phần tử trong mảng.
	Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, nhiệm vụ của bạn là tìm kiếm xem X có xuất hiện trong mảng hay không, 
	nếu X xuất hiện trong mảng thì thực hiện xóa vị trí xuất hiện đầu tiên của X trong mảng, 
	ngược lại in ra "NOT FOUND" nếu X không xuất hiện.

	Input Format
	Dòng đầu tiên là 2 số nguyên dương N, X; 
	Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng.(1≤N≤1000, -10^3≤A[i],X≤10^3).

	Output Format
	In YES nếu N là số hoàn hảo, ngược lại in NO.

	Dữ liệu vào
	6 4
	1 3 4 2 3 4
	Dữ liệu ra
	1 3 2 3 4

	Dữ liệu vào:
	6 5
	1 3 4 2 3 4
	Dữ liệu ra:
	NOT FOUND
*/

#include <iostream>

using namespace std;

void NhapMang(int[], int&);
void XoaPhanTu(int[], int&, int);

int main()
{
	int n, x;
	cin >> n >> x;
	int a[10000];
	NhapMang(a, n);
	XoaPhanTu(a, n, x);

	return 0;
}

void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

void XoaPhanTu(int a[], int& n, int x)
{
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			cnt++;
			if (cnt == 1)
				for (int j = i; j <= n - 2; j++)
					a[j] = a[j + 1];
		}
	}
	n--;
	if (cnt == 0)
	{
		cout << "NOT FOUND";
	}
	else
		for (int i = 0; i < n; i++)
			cout << a[i] << " ";
}

/*		Cách 2
#include <iostream>
#define MAX 1000

using namespace std;
void EnterArr(int[], int&);
int FirstChecker(int[], int, int);
void EarseEle(int[], int, int);

int main()
{
	int n;
	// n is the element of 1D - array
	cin >> n;
	int x;
	// x is the checker
	cin >> x;
	int arr[MAX];
	EnterArr(arr, n);
	EarseEle(arr, n, x);

	return 0;
}

void EnterArr(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> arr[i];
}

int FirstChecker(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
}

void EarseEle(int arr[], int n, int x)
{
	int guard = FirstChecker(arr, n, x);
	
	for (int i = guard; i <= n - 2; i++)
		arr[i] = arr[i + 1];
	n--;
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}
*/