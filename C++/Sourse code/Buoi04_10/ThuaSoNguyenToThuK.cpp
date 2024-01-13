/*
	C++ Buổi 04_Bài 10.Thừa số nguyên tố thứ K.
	Đưa ra số nguyên tố thứ k trong phân tích thừa số nguyên tố của một số nguyên dương n. 
	Ví dụ n=28, k=3 ta có kết quả là 7 vì 28=2x2x7.

	Dữ liệu vào:
	2 số n,k(1 ≤n,k≤10^9).
	Dữ liệu ra:
	In ra thừa số nguyên tố thứ k của n, nếu n không có thừa số nguyên tố thứ k thì in ra -1.

	Dữ liệu vào:
	28 3
	Dữ liệu ra:
	7
*/

#include <iostream>
#include <cmath>
using namespace std;

int ptnt(long long, long long);

int main() {
	long long n, k;
	cin >> n >> k;
	cout << ptnt(n, k);
	return 0;
}

int ptnt(long long n, long long k) {
	int cnt = 0;
	for (int i = 2; i * i <= n; ++i) {
		if (!(n % i))
			while (n % i == 0) {
				++cnt;
				n /= i;
				if (cnt == k) return i;
			}
	}
	if (n != 1) ++cnt;
	if (cnt == k) return n;
	return -1;
}