/*
	C++ Buổi 04_Bài 21.T-prime2.
	Đếm tất cả các số có đúng ba ước số không vượt quá n.  Ví dụ n=100, ta có các số 4 9 25 49.

	Dữ liệu vào:
	Số nguyên dương N(1≤N≤10^12).
	Dữ liệu ra:
	Đưa ra kết quả mỗi theo từng dòng.

	Dữ liệu vào:
	100
	Dữ liệu ra:
	4
*/

#include <iostream>
#include <cmath>

using namespace std;

bool Is_prime(long long);

int main()
{
	long long n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (Is_prime(i))
		{
			float uoc = 1ll * i * i;
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}

bool Is_prime(long long n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}