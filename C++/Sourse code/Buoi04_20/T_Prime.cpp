/*
	C++ Buổi 04_Bài 20.T-prime.
	Hãy liệt kê tất cả các số có đúng ba ước số không vượt quá n. Ví dụ n=100, ta có các số 4, 9, 25, 49.
	
	Dữ liệu vào:
	Số nguyên dương N.(1≤N≤10^12).
	Dữ liệu ra:
	Đưa ra kết quả trên một dòng.

	Dữ liệu vào:
	100
	Dữ liệu ra:
	4 9 25 49
*/

#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(long long);

int main()
{
	long long n;
	cin >> n;
	for (int i = 1; i <= sqrt(n); i++)
	{
		if (is_prime(i))
			cout << 1ll * i * i << " ";
	}
	return 0;
}

bool is_prime(long long n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}