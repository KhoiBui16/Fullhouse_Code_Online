/* 
	C++ Buổi 02_Bài 24.Số thuộc đoạn.
	Cho một đoạn đại số a, b.Tính số lượng số nguyên trong đoạn[a, b] đó.
	Một dòng ghi 2 số thực a, b.
	Là số lượng các số nguyên trong đoạn [a,b].
	Dữ liệu vào:
	1.1 5.2
	Dữ liệu ra:
	4
 */

 // 2.24
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	cout << round(b - a);
	return 0;
}