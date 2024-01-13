/*
    C++ Buổi 14_Bài 08.Ước chung lớn nhất, bội chung nhỏ nhất.(Đệ Quy)
    Cho 2 số a và b, hãy tính ước chung lớn nhất và bội chung nhỏ nhất của 2 số a và b. Trong đó hàm UCLN sử dụng đệ quy để tính.

    ữ liệu vào:
    2 số nguyên dương a và b.(1≤a,b≤10^12)

    Dữ liệu ra:
    In ra UCLN và BCNN của 2 số.

    Ví dụ:
    Dữ liệu vào:
    12 4
    Dữ liệu ra:
    4 12
*/

#include <iostream>
#define ll long long

using namespace std;

ll GCD(ll, ll);
ll LCM(ll, ll);

int main()
{
    ll a, b;
    cin >> a >> b;
    ll UCLN = GCD(a, b);
    ll BCNN = LCM(a, b);
    cout << UCLN << " " << BCNN;

    return 0;
}

ll GCD(ll a, ll b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}

ll LCM(ll a, ll b)
{
    return a / GCD(a, b) * b;
}