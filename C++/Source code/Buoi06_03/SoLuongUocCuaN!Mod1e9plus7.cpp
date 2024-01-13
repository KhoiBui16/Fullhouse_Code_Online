#include <iostream>
#include <cmath>
#define MAX 1000000007
using namespace std;

long long GiaiThua(long long);
bool isPrime(long long);
long long Legendre(long long, long long);
long long UocNGiaiThua(long long);

int main()
{
	long long n;
	cin >> n;
	long long kq = UocNGiaiThua(n);
	// giá trị của n! mod 1e9+7
	cout << kq;
	return 0;
}

bool isPrime(long long n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}

long long Legendre(long long n, long long p)
{
	long long res = 0;
	for (long long i = p; i <= n; i *= p)
		res += n / i;
	return res;
}

long long UocNGiaiThua(long long n)
{
	long long res = 1;
	for (int i = 2; i <= n; i++)
	{
		if (isPrime(i) == true)
		{
			// e la bac cua thua so nguyen to i trong n!
			long long e = Legendre(n, i);
			// su dung ki thuat dong du
			// d(n) = (k1 + 1) * (k2 + 1) * ... * (kn + 1)
			// (A* B) mod C = [(A mod C) * (B mod C)] mod C
			res = res % MAX * (e + 1) % MAX;
			res %= MAX;
		}
	}
	return res;
}
