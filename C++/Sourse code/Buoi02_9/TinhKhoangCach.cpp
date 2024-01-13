/*
	C++ Buổi 02_Bài 09.Tính khoảng cách.
	Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy
	Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên.(-10^6 ≤ xi, yi ≤ 10^6).
	Khoảng cách giữa 2 điểm lấy độ chính xác với 4 chữ số
	Dữ liệu vào:
	1 4 4 8
	Dữ liệu ra:
	5.0000
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double distance = sqrt((long long)pow((x2 - x1), 2) + (long long)pow((y2 - y1), 2));
	cout << setprecision(4) << fixed << distance;
	return 0;
}