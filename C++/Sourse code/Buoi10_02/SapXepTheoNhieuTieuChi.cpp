/*
	 C++ Buổi 10_Bài 02.Sắp xếp theo nhiều tiêu chí.
	Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo các tiêu trí sau đây:

	1.Sắp xếp các phần tử theo giá trị tuyệt đối tăng dần.
	2.Sắp xếp các phần tử theo giá trị tuyệt đối tăng dần.Nếu 2 số có cùng giá trị tuyệt đối thì số dương được xếp sau.
	3.Sắp xếp theo tổng chữ số tăng dần.
	4.Sắp xếp theo tổng chữ số tăng dần.Nếu 2 số có cùng tổng chữ số thì in ra số có giá trị nhỏ hơn sẽ xếp sau.
	5.Sắp xếp sao cho các số chẫn xếp trước,các số lẻ xếp sau.
	6.Sắp xếp sao cho các số chẫn xếp trước theo thứ tự giảm dần,các số lẻ xếp sau theo thứ tự tăng dần.

	Dữ liệu vào:
	Dòng đầu tiên là số nguyên dương N.
	Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách. (1<=N<=10^5;-10^9<=A[i]<=10^9)

	Dữ liệu ra:
	In ra đáp án của mỗi yêu cầu của bài toán trên 1 dòng.

	Dữ liệu vào:
	5
	14 -88 6 23 -14
	Dữ liệu ra:
	6 14 -14 23 -88
	6 -14 14 23 -88
	-88 -14 14 23 6
	-88 -14 23 14 6
	-88 -14 14 6 23
	14 6 -14 -88 23
*/

#include <iostream>
#include <algorithm>
using namespace std;

void NhapMang(long[], int&);
bool cmp1(long, long);
bool cmp2(long, long);
int TongChuSo(long);
bool cmp3(long, long);
bool cmp4(long, long);
bool checkChan(long);
bool checkLe(long);
bool cmp5(long, long);
bool cmp6(long, long);
void XuatMang(long[], int);

long a[1000001];

int main()
{
	int n;
	cin >> n;
	NhapMang(a, n);
	XuatMang(a, n);
	return 0;
}

void NhapMang(long a[], int& n)
{
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

bool cmp1(long a, long b)
{
	if (abs(a) < abs(b))
		return true;
	return false;
}

bool cmp2(long a, long b)
{
	if (abs(a) != abs(b))
	{
		if (abs(a) < abs(b))
			return true;
		return false;
	}
	else
	{
		if (a < b)
			return true;
		return false;
	}
}

int TongChuSo(long n)
{
	int sum = 0;
	while (abs(n) != 0)
	{
		if (abs(n) >= 10)
			sum += abs(n) % 10;
		else
		{
			// trường hợp chỉ có 1 chữ số
			// thì n: âm => cộng giá trị âm
			// n: dương => cộng giá trị dương
			sum += n;
		}
		n /= 10;
	}
	return sum;
}

bool cmp3(long a, long b)
{
	if (TongChuSo(a) < TongChuSo(b))
		return true;
	return false;
}

bool cmp4(long a, long b)
{
	if (TongChuSo(a) != TongChuSo(b))
	{
		if (TongChuSo(a) < TongChuSo(b))
			return true;
		return false;
	}
	else
	{
		if (a > b)
			return true;
		return false;
	}
}

bool checkChan(long n)
{
	return (n % 2 == 0);
}

bool checkLe(long n)
{
	return (n % 2 != 0);
}

bool cmp5(long a, long b)
{
	if (checkChan(a) && checkLe(b))
		return true;
	return false;
}

bool cmp6(long a, long b)
{
	if (checkChan(a) && checkChan(b))
	{
		if (a > b)
			return true;
		return false;
	}
	else if (checkLe(a) && checkLe(b))
	{
		if (a < b)
			return true;
		return false;
	}
	else if (checkChan(a) && checkLe(b))
		return true;
	return false;
}

void XuatMang(long a[], int n)
{
	// có thể sử dụng for each thay cho for thông thường
	// tiêu chí 1
	sort(a + 0, a + n, cmp1);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	// tiêu chí 2
	sort(a + 0, a + n, cmp2);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	// tiêu chí 3
	sort(a + 0, a + n, cmp3);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	// tiêu chí 4
	sort(a + 0, a + n, cmp4);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	// tiêu chí 5
	sort(a + 0, a + n, cmp5);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	// tiêu chí 6
	sort(a + 0, a + n, cmp6);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}