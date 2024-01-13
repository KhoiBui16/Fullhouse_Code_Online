/*
	C++ Buổi 14_Bài 10.Lũy thừa nhị phân.(Đệ Quy)
	Cho 2 số nguyên không âm a và b. Hãy tính a^b%(10^9+7). 
	Kiến thức bạn cần sử dụng là Binary Exponentiation.

	Kiến thức Binary Exponentitaion recursion
		- a^n = 
		+ 1: if n == 0
		+ (a^(n/2))^2 if n > 0 and n is even
		+ (a^(n/2))^2 * a if n > 0 and n is odd
	Áp dụng thêm kiến thức đồng dư (Modulo)
	=> The condition to stop of recursion is n == 0 

	- Cách 2 sử dụng kĩ thuật Khử đệ quy bằng áp dụng chuyển đổi hệ thập phân sang hệ cơ số 2
	- khi mũ lẻ thì mới nhân đáp án lại
	- Sau đó => mũ /= 2 && a = a * a
	- Kết hợp với mĩ thuật modulo

	Dữ liệu vào:
	2 số nguyên dương a, b.(1≤a,b≤10^9)

	Dữ liệu ra:
	In ra kết quả của bài toán.

	Dữ liệu vào:
	2 3
	Dữ liệu ra:
	8
*/

#include <iostream>
#define ll long long
#define MOD 100000007
using namespace std;

ll BinPow1(int, int);
ll BinPow2(ll, int);

int main()
{
	int a, b;
	cin >> a >> b;
	ll ans = BinPow1(a, b);
	cout << ans;
	return 0;
}

ll BinPow1(int a, int b)
{
	if (b == 0)
		return 1;
	ll res = BinPow1(a, b / 2); // a^(b / 2)
	if (b % 2 == 0)
		return((res % MOD) * (res % MOD)) % MOD;
	else
		return (((res % MOD) * (res % MOD)) % MOD * (a % MOD)) % MOD;
}

// Cách 2: Khủ đệ quy
ll BinPow2(ll a, int b)
{
	ll ans = 1;
	while (b != 0)
	{
		if (b % 2 != 0)
		{
			ans *= a;
			ans %= MOD;
		}
		a = a * a;
		a %= MOD;
		b /= 2;

	}
	return (ans % MOD);
}
