/*
	C++ Buổi 03_Bài 19.Trailing Zero.
    Đếm chữ số 0 tận cùng của n giai thừa.
	Số nguyên dương n ( 1 ≤ n ≤ 10^14).
	Dữ liệu vào:
	10
	Dữ liệu ra:
	2
*/

#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    ll ans = 0;
    while (n / 5 > 0)
    {
        ans += (n / 5);
        n /= 5;
    }
    cout << ans;
    return 0;
}