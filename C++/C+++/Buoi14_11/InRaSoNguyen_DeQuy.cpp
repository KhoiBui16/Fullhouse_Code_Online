/*
	C++ Buổi 14_Bài 11.In ra số nguyên.
	Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và từ phải qua trái. 
	hú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu.

	Dữ liệu vào:
	Số nguyên không âm N.(0≤n≤10^18)
	Dữ liệu ra:
	Dòng đầu tiên in ra các chữ số của n theo thứ tự từ trái qua phải. 
	Dòng thứ hai in ra các chữ số của n theo thứ tự từ phải qua trái. 
	Các chữ số được viết cách nhau một dấu cách.

	Dữ liệu vào:
	12345
	Dữ liệu ra:
	1 2 3 4 5
	5 4 3 2 1
*/

#include <iostream>
#define ll long long

using namespace std;

void InThuan(ll);
void InNghich(ll);

int main()
{
    ll n;
    cin >> n;
    InThuan(n);
    cout << endl;
    InNghich(n);
    return 0;
}

void InThuan(ll n)
{
    if (n == 0)
        return;
    InThuan(n / 10);
    int dv = n % 10;
    cout << dv << " ";
}

void InNghich(ll n)
{
    if (n == 0)
        return;
    int dv = n % 10;
    cout << dv << " ";
    InNghich(n / 10);
}

/*  Cách 2
ll SoTuPhaiSangTrai(ll);
ll SoTuTraiSangPhai(ll);

int main()
{
    ll n;
    cin >> n;
    cout << SoTuTraiSangPhai(n) << endl;
    cout << SoTuPhaiSangTrai(n);
    return 0;
}

ll SoTuPhaiSangTrai(ll n)
{
    if (n <= 9)
        return n;
    int dv = n % 10;
    cout << dv << " ";
    return SoTuPhaiSangTrai(n / 10);
}

ll SoTuTraiSangPhai(ll n)
{
    if (n <= 9)
        return n;
    int stt = SoTuTraiSangPhai(n / 10);
    cout << stt << " ";
    return SoTuTraiSangPhai(n % 10);
}*/
