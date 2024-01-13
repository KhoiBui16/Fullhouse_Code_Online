/*
	C++ Buổi 03_Bài 20.Bậc của thừa số nguyên tố trong N!
	Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x. 
	Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3^2.
	Dữ liệu vào:
	Cặp số N, p được viết cách nhau một khoảng trống.(1≤N≤10^14; 2≤p≤5000).
	Dữ liệu ra:
	Đưa ra kết quả trên một dòng.
	
	Dữ liệu vào:
	7 3
	Dữ liệu ra:
	2
*/

#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    int p;
    cin >> n >> p;
    ll ans = 0;

    for (ll i = p; i <= n; i *= p)
        ans += n / i;
    cout << ans;
	return 0;
}