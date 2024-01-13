/*
	C++ Buổi 07_Bài 16.Sàng số nguyên tố.
	Cho số nguyên không âm N, liệt kê các số nguyên tố không vượt quá N.
	
	Input Format
	Số nguyên N(0≤n≤10^7)
	Output Format
	In ra các số nguyên tố không vượt quá N trên 1 dòng, các số cách nhau một khoảng trắng.

	Dữ liệu vào:
	20
	Dữ liệu ra:
	2 3 5 7 11 13 17 19
*/

#include <iostream>
#include <cmath>

using namespace std;

void SeivePrimeNum(long);

int main()
{
	long n;
	cin >> n;
	SeivePrimeNum(n);
	return 0;
}

void SeivePrimeNum(long n)
{
	bool prime[10000000 + 1];
	// đánh dấu tất cả các số từ 0 đến n là số nguyên tố
	for (int i = 0; i <= n; i++)
		prime[i] = true;
	// số 0 và 1 không phải là số nguyên tố
	prime[0] = prime[1] = false;
	for (int i = 2; i <= sqrt(n); i++)
		if (prime[i] == true)
			for (int j = i * i; j <= n; j += i)
				// bội của số nguyên tố i thì không phải là số nguyên tố 
				// vì số nguyên tố chỉ có ước là 1 và chính nó
				prime[j] = false;
	for (int i = 2; i <= n; i++)
		if (prime[i] == true)
			cout << i << " ";
}



