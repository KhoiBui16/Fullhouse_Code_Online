/*
	C++ Buổi 06_Bài 05.Ước số nguyên tố nhỏ nhất.(Có thể dùng sàng số nguyên tố)
	Cho số tự nhiên N. Nhiệm vụ của bạn là in ra ước số nguyên tố nhỏ nhất của các số từ 1 đến N. 
	Ước số nguyên tố nhỏ nhất của 1 là 1. 
	Ước số nguyên tố nhỏ nhất của các số chẵn là 2. 
	Ước số nguyên tố nhỏ nhất của các số nguyên tố là chính nó.

	Input Format
	Một số N được ghi trên một dòng.(1≤N≤100000).
	Output Format
	Đưa ra kết quả theo từng dòng.

	Dữ liệu vào:
	7
	Dữ liệu ra:
	1
	2
	3
	2	
	5
	2
	7
*/

#include <iostream>

using namespace std;

int checkPrimeNum(int);

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << checkPrimeNum(i) << endl;
	}
	return 0;
}

int checkPrimeNum(int n)
{
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return i;
	}
	return n;
}