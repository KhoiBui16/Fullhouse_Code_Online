/*
	C++ Buổi 04_Bài 18.Bình phương nguyên tố 1.
	Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và chia hết cho bình phương của số nguyên tố đó. 
	Viết chương trình liệt kê các số đẹp như vậy trong đoạn giữa hai số nguyên dương cho trước.

	Dữ liệu vào:
	2 số nguyên dương a, b.(1≤a≤b≤10^6).
	Dữ liệu ra:
	In ra các số đẹp trong đoạn từ a tới b.

	Dữ liệu vào:
	4 50
	Dữ liệu ra:
	4 8 9 12 16 18 20 24 25 27 28 32 36 40 44 45 48 49 50

*/

#include <iostream>

using namespace std;

bool CheckNumbers(int);

int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; ++i)
	{
		if (CheckNumbers(i)) cout << i << " ";
	}
	return 0;
}

bool CheckNumbers(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		int cnt = 0;
		// nêu dem = 1 => chi chia het 1 lân cho 2 => dem >= 2 thì nó duyet them 1 lan
		while (n % i == 0)
		{
			++cnt;
			n /= i;
		}
		if (cnt >= 2) return true;
	}
	return false;
}