/*
	Công thức Truy hồi:Pascal
	NcK = (n - 1)cK + (n - 1)c(k - 1)
	C++ Buổi 14_Bài 07.Tính tổ hợp chập K của N(Đệ Quy)
	Cho 2 số nguyên dương N và K. Hãy tính tổ hợp chập K của N. 
	Tiện thể các bạn ôn lại một vài tính chất của tổ hợp chập K của N nhé -> tra google

	Dữ liệu vào:
	2 số nguyên dương N và K.(0≤k≤n≤10)

	Dữ liệu ra:
	Kết quả của tổ hợp chập K của N.

	Dữ liệu vào:
	3 2
	Dữ liệu ra:
	3
*/

#include <iostream>
#define ll long long
using namespace std;

ll ToHopChapKCuaN(int, int);

int main()
{
	int N, k;
	cin >> N >> k;
	ll CnK = ToHopChapKCuaN(N, k);
	cout << CnK;

	return 0;
}

ll ToHopChapKCuaN(int N, int k)
{
	// điều kiện dừng
	if (N == k || k == 0)
		return 1;
	return ToHopChapKCuaN(N - 1, k) + ToHopChapKCuaN(N - 1, k - 1);
}
