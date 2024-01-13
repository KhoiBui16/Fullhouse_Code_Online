/*
	C++ Buổi 02_Bài 02.Thao tác với kiểu dữ liệu.
	Bạn cần nhập các dữ liệu sau đây:

	Dòng 1 là số nguyên a.
	Dòng 2 là số nguyên b.
	Dòng 3 là kí tự c,
	Dòng 4 là số thực float d,
	Dòng 5 là số thực double e.
Nhiệm vụ của bạn là in ra 5 dòng như sau: 
	Dòng 1 in a, 
	dòng 2 in b, 
	dòng 3 in c, 
	dòng 4 in d với độ chính xác 3 số đằng sau dấu phẩy, 
	dòng 5 in e với độ chính xác 10 số sau dấu phẩy.

	Nhập lần lượt là a, b, c, d, e. (-10^9 ≤ a ≤ 10^9; 
	-10^18≤ b ≤10^18; 
	c là kí tự in hoa hoặc in thường; 
	-10^6 ≤ d ≤ 10^6; -10^9≤ e ≤10^9).

	Dữ liệu vào:
	54
	1000000
	h
	12.672
	5.79301
	Dữ liệu ra:
	54
	1000000
	h	
	12.672
	5.7930100000
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	long a;
	cin >> a;
	cout << a << endl;

	long long b;
	cin >> b;
	cout << b << endl;

	char c;
	cin >> c;
	cout << c << endl;

	float d;
	cin >> d;
	cout << setprecision(3) << fixed << d << endl;

	double e; cin >> e; cout << setprecision(10) << fixed << e << endl;
	return 0;
}