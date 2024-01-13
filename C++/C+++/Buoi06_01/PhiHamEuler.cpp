/*
	C++ Buổi 06_Bài 01.Phi hàm Euler.
	Đếm số lượng các số nguyên tố cùng nhau với n không vượt quá n.

	Input Format
	Số nguyên duy nhất n.(1≤n≤10^12)
	Output Format
	Số lượng các số nằm trong đoạn từ 1 tới n mà nguyên tố cùng nhau với n.

	Dữ liệu vào:
	36
	Dữ liệu ra:
	12
*/

/*
	- Trong ly thuyet so, hàm sô Euler cua 1 sô nguyên duong n:
		+ là các sô nguyên duong nho hon hoac bàng n
		+ nguyên to cùng nhau vói n: phi(n) là sô ngto cùng nhau vói n trong doan tù 1 -> n
	- Ký Hieu:
		+ giông dáu phi trong vât lý
		+ giông dáu tù thông trong vât lý
	- VD: phi(9) = 6 vì có 6 sô: 1, 2, 4, 5, 7 và 8 là nguyen tô cùng nhau vói 9
*/

#include <iostream>

using namespace std;


long long Euler(long long);


int main()
{
	long long n;
	cin >> n;
	cout << Euler(n);
	return 0;
}

long long Euler(long long n)
{
	if (n == 0) return 0;
	long long ans = n;
	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			ans -= ans / i;
			while (n % i == 0)
				n /= i;
		}
	}
	return ans;
}