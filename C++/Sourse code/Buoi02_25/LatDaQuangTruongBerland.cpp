/*
	C++ Buổi 02_Bài 25.Lát đá quảng trường Berland.
	Quảng trường Nhà hát ở thủ đô Berland có hình chữ nhật với kích thước n × m mét. 
	Nhân dịp kỷ niệm thành phố, một quyết định đã được đưa ra để lát Quảng trường bằng những viên bằng đá granit vuông. 
	Mỗi viên đá hình vuông có kích thước a × a. 
	Số lượng viên đá ít nhất cần thiết để lát Quảng trường là bao nhiêu? 
	Nó được phép che phủ bề mặt lớn hơn Quảng trường Nhà hát. 
	Nó không được phép phá vỡ các viên đá. 
	Các cạnh của viên đá phải song song với các cạnh của Quảng trường.

	Input Format
	3 số nguyên dương n, m, a.(1 ≤ n,m,a ≤ 10^9).
	Output Format
	Viết số lượng viên đá cần thiết để lát kín quảng trường.

	Dữ liệu vào:
	4 4 2
	Dữ liệu ra:
	4
*/

// 2.25

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	unsigned long n, m, a;
	cin >> n >> m >> a;
	long d = ceil(1.0 * m / a);
	long r = ceil(1.0 * n / a);
	cout << d * r;
}