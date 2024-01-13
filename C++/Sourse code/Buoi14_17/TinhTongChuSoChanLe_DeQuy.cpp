/*
	C++ Buổi 14_Bài 17.Tính tổng chữ số chẵn lẻ.
	Cho số nguyên không âm N, hãy tính tổng các chữ số chẵn, tổng các chữ số lẻ của N.

	Dữ liệu vào:
	Số nguyên không âm N.(0≤n≤10^18).
	Dữ liệu ra:
	Dòng đầu tiên in ra tổng các chữ số chẵn. Dòng thứ 2 in ra tổng các chữ số lẻ.

	Dữ liệu vào:
	123456
	Dữ liệu ra:
	12
	9
*/

#include <iostream>
#define ll long long

using namespace std;

ll TongChan(ll);
ll TongLe(ll);

int main()
{
    ll n;
    cin >> n;
    ll kqChan = TongChan(n);
    ll kqLe = TongLe(n);
    cout << kqChan << endl;
    cout << kqLe;
    return 0;
}

ll TongChan(ll n)
{
    if (n <= 9)
    {
        if (n % 2 == 0)
            return n;
        else
            return 0;
    }
    int dv = n % 10;
    if (dv % 2 == 0)
        return dv + TongChan(n / 10);
    return TongChan(n / 10);
}

ll TongLe(ll n)
{
    if (n <= 9)
    {
        if (n % 2 != 0)
            return n;
        else
            return 0;
    }
    int dv = n % 10;
    if (dv % 2 != 0)
        return dv + TongLe(n / 10);
    return TongLe(n / 10);
}