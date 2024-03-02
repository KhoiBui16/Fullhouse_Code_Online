#include <iostream>
#include <cmath>
using namespace std;

bool CheckPrimeNum(long long);
bool IsPerfectNum(long long);

int main()
{
	long long n;
	cin >> n;
	if (IsPerfectNum(n) == true)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}

bool CheckPrimeNum(long long n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	return true;
}


bool IsPerfectNum(long long n)
{
	// p: la so nguyen to
	for (int p = 2; p <= 32; p++)
	{
		if (CheckPrimeNum(p) && CheckPrimeNum((long long)pow(2, p) - 1) == true)
		{
			long long perfectNum = (long long)(pow(2, p) - 1) * (pow(2, p - 1));
			// kt n nhap vap co phai so hoan hao hay ko
			if (perfectNum == n)
				return true;
		}
	}
	return false;
}