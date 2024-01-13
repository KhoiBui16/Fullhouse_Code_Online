/*
	C++ Buổi 06_Bài 04.Lũy thừa nhị phân.
	Cho 2 số nguyên không âm a và b. Hãy tính a^b%(10^9+7). Kiến thức bạn cần sử dụng là Binary Exponentiation.

	Input Format
	2 số nguyên dương a, b.(1≤a,b≤10^9)
	Output Format
	In ra kết quả của bài toán.

	Dữ liệu vào:
	2 3
	Dữ liệu ra:
	8
*/

#include <iostream>
#define MAX 1000000007

using namespace std;
// using Binary Potentiation. O(log2N).
long long Binpow(long, long);

int main()
{
	long a, b;
	cin >> a >> b;
	cout << Binpow(a, b);

	return 0;
}

long long Binpow(long a, long b)
{
	if (b == 0)
		return 1;
	long long res = Binpow(a, b / 2); // a^(b/2)
	if (b % 2 == 0)
		return ((res % MAX) * (res % MAX)) % MAX;
	else
		return (((res % MAX) * (res % MAX)) % MAX * a % MAX) % MAX;
}