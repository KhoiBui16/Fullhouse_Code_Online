/*
	C++ Buổi 07_Bài 02.Liệt kê số fibonacci trong mảng.
	Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.

	Input Format
	Dòng đầu tiên là N : số lượng phần tử trong mảng; 
	Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.(1<=N<=10^6; 0<=A[i]<=10^18)
	Output Format
	In ra các số là số Fibonacci trong dãy theo thứ tự xuất hiện. 
	Nếu trong mảng không tồn tại số Fibonacci nào thì in ra "NONE".

	Dữ liệu vào:
	5
	1 0 4 23 7
	Dữ liệu ra:
	1 0
*/

#include <iostream>
#define ll long long

using namespace std;

void enterInput(ll[], ll&);
ll checkFiboNumbers(ll);
void exportFiboNumbers(ll[], ll);

int main()
{
	ll n;
	cin >> n;
	ll a[1000];
	enterInput(a, n);
	exportFiboNumbers(a, n);
	return 0;
}

void enterInput(ll a[], ll& n)
{
	for (ll i = 0; i < n; ++i)
		cin >> a[i];
}

ll checkFiboNumbers(ll n)
{
	ll f1 = 0, f2 = 1, fn;
	if (n == 0 || n == 1) return 1;
	for (int i = 3; i <= 93; i++)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		if (fn == n) return 1;
	}
	return 0;
}

void exportFiboNumbers(ll a[], ll n)
{
	int cnt = 0;
	for (ll i = 0; i < n; i++)
	{
		if (checkFiboNumbers(a[i]))
		{
			cout << a[i] << " ";
			++cnt;
		}
	}
	if (cnt == 0) cout << "NONE";
}

/*
	CÁCH 2:
#include <iostream>
using namespace std;

bool soFibonacci(long long n);

int main()
{
	int n,dem=0;
	cin>>n;
	long long a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (long long i=0;i<n;i++)
	{
		if (soFibonacci(a[i]))
		{
			cout <<a[i]<< ' ';
			dem++;
		}
	}
	if (dem==0)
		cout<<"NONE";
	return 0;
}
bool soFibonacci(long long n)
{
	long long a=1;
	for (long long i=0;i<=n;)
	{
		if (i==n)
			return true;
		i=i+a;
		a=i-a;
	}
	return false;
}
*/