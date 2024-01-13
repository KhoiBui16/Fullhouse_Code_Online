/*
	C++ Buổi 04_Bài 03.Kiểm tra sô thuần sô nguyên tố.
	Một số được coi là thuần nguyên tố nếu 
	nó là số nguyên tố, tất cả các chữ số là nguyên tố và tổng chữ số của nó cũng là một số nguyên tố. 
	Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số thuần nguyên tố.

	Dữ liệu vào:
	Nhập 2 số nguyên dương.(1 ≤ a,b ≤ 10^6).
	Dữ liệu ra:
	In ra kết quả của bài toán.

	Dữ liệu vào:
	1 10
	Dữ liệu ra:
	4
*/

#include <iostream>

using namespace std;

int checkPrimeNum(int);
int chuSoNguyenTo(int);

int main()
{
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	for (int i = a; i <= b; ++i)
	{
		if (chuSoNguyenTo(i) && checkPrimeNum(i))
			++cnt;
	}
	cout << cnt;
	return 0;
}

int checkPrimeNum(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return 0;
	}
	return n > 1;
}

int chuSoNguyenTo(int n)
{
	int s = 0;
	while (n)
	{
		int r = n % 10;
		s += r;
		if (r != 2 && r != 3 && r != 5 && r != 7)
			return 0;
		n /= 10;
	}
	return checkPrimeNum(s);
}