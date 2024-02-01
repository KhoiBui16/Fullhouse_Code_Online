/*
	C++ Buổi 14_Bài 16.Chữ số lớn nhất và nhỏ nhất(Đệ Quy).
	Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N.

	Dữ liệu vào:
	Số nguyên không âm N.(0≤n≤10^18)
	Dữ liệu ra:
	Chữ số lớn nhất và nhỏ nhất của N.

	Dữ liệu vào:
	1324649
	Dữ liệu ra:
	9 1
*/
	// CÁCH 1:
#include <iostream>
#include <algorithm>
using namespace std;

long long MaxOfDigit(long long);
long long MinOfDigit(long long);
// sử dụng hàm max min có săn trong C++ phải khai báo thư viện algorithm

int main()
{
	long long n;
	cin >> n;
	long long max = MaxOfDigit(n);
	long long min = MinOfDigit(n);
	cout << max << " " << min;
	return 0;
}

long long MaxOfDigit(long long n)
{
	if (n < 10)
		return n;
	return max(n % 10, MaxOfDigit(n / 10));
}

long long MinOfDigit(long long n)
{
	if (n < 10)
		return n;
	return min(n % 10, MinOfDigit(n / 10));
}

/*		CÁCH 2: 
#include <iostream>
#define ll long long

using namespace std;

int ChuSoLonNhat(ll);
int ChuSoNhoNhat(ll);

int main()
{
    ll n;
    cin >> n;
    int MinDigit = ChuSoNhoNhat(n);
    int MaxDigit = ChuSoLonNhat(n);
    cout << MaxDigit << " " << MinDigit;

    return 0;
}

int ChuSoLonNhat(ll n)
{
    if (n <= 9)
        return n;
    int lc = ChuSoLonNhat(n / 10);
    int dv = n % 10;
    if (dv > lc)
        lc = dv;
    return lc;
}

int ChuSoNhoNhat(ll n)
{
    if (n <= 9)
        return n;
    int lc = ChuSoNhoNhat(n / 10);
    int dv = n % 10;
    if (dv < lc)
        lc = dv;
    return lc;
}
*/

