/*
    C++ Buổi 19-20_Bài 01.Tính phân số.


    Viết chương trình khai báo cấu trúc gồm tử số và mẫu số. Các giá trị đều nguyên dương và không quá 18 chữ số. Sau đó thực hiện nhập vào một phân số và in ra phân số đó ở dạng tối giản.

    Input Format
    2 số nguyên lần lượt là tử số và mẫu số.

    Output Format
    In ra phân số tối giản.

    Ví dụ:
    Dữ liệu vào:
    74 24
    Dữ liệu ra:
    37/12
*/

#include <iostream>
#include <cmath>
using namespace std;

struct PhanSo
{
	long long Tu;
	long long Mau;
};
typedef struct PhanSo PHANSO;

long long GCD(long long, long long);
void RutGon(PHANSO&);

int main()
{
	PHANSO ps;
	cin >> ps.Tu >> ps.Mau;
	
	RutGon(ps);
	cout << ps.Tu << "/" << ps.Mau;

	return 0;
}

long long GCD(long long a, long long b)
{
	a = abs(a);
	b = abs(b);
	while (b != 0)
	{
		long long r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void RutGon(PHANSO& ps)
{
	long long kq = GCD(ps.Tu, ps.Mau);
	ps.Tu = ps.Tu / kq;
	ps.Mau = ps.Mau / kq;
}