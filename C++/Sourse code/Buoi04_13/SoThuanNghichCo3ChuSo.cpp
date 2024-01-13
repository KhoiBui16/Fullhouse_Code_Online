/*
	C++ Buổi 04_Bài 13.Số thuận nghịch có 3 ước nguyên tố.
	Một số được coi là đẹp nếu nó là số thuận nghịch và có ít nhất 3 ước số nguyên tố khác nhau.
	Viết chương trình in ra các số đẹp như vậy trong một đoạn giữa hai số nguyên cho trước.

	Dữ liệu vào:
	2 số a, b(1≤a≤b≤10^7).
	Dữ liệu ra:
	In ra các số đẹp trong đoạn a, b. Trong trường hợp không tồn tại số đẹp nào thì in ra -1.

	Dữ liệu vào:
	1 1000
	Dữ liệu ra:
	66 222 252 282 414 434 444 474 494 525 555 585 595 606 616 636 646 666 696 777 828 858 868 888 969
*/

#include <iostream>

using namespace std;

int soTN(int);
int check(int);
void Xuat(long, long);

int main()
{
	long a, b;
	cin >> a >> b;
	Xuat(a, b);
	return 0;
}

int soTN(int n)
{
	int temp = n, rev = 0;
	while (n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	return rev == temp;
}


int check(int n)
{
	int ans = 0;
	for (int i = 2; i * i <= n; ++i)
	{
		int cnt = 0;
		while (n % i == 0)
		{
			++cnt;
			n /= i;
		}
		if (cnt != 0) ++ans;
	}
	if (n != 1) ++ans;
	return ans >= 3;
}

void Xuat(long a, long b)
{
	int dem = 0;
	for (long i = a; i <= b; ++i)
	{
		if (soTN(i) && check(i))
		{
			cout << i << " ";
			++dem;
		}
	}
	if (dem == 0) cout << "-1";
}