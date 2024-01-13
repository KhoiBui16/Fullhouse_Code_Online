/*
	C++ Buổi 04_Bài 15.Số Sphenic.
	Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của ba thừa số nguyên tố khác nhau. 
	Ví dụ N=30 là số Sphenic vì 30 = 2×3×5; N = 60 không phải số Sphenic vì 60 = 2×2×3×5. 
	Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải số Sphenic hay không?

	Dữ liệu vào:
	Một số nguyên dương N.(1≤N≤10^18).
	Dữ liệu ra:
	Đưa ra YES hoặc NO tương ứng với N là số Sphenic hoặc không.

	Dữ liệu vào:
	30
	Dữ liệu ra:
	YES
*/

#include <iostream>
#include <cmath>

using namespace std;

int checkSphenic(long long);

int main() {
	long long n;
	cin >> n;
	if (checkSphenic(n) == 1)
		printf("YES");
	else printf("NO");
	return 0;
}

int checkSphenic(long long n) {
	int cnt_2 = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (!(n % i))
		{
			int cnt = 0;
			cnt_2 += 1;
			while (!(n % i))
			{
				++cnt;
				n /= i;
			}
			if (cnt > 1)
				return 0;
		}
	}
	if (n != 1)
		++cnt_2;
	return cnt_2 == 3;
}