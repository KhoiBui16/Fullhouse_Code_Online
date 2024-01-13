﻿//	C++ Buổi 04_Bài 12.Cặp số nguyên tố cùng nhau.

#include <iostream>

using namespace std;

int gcd(int, int);
void OutPut(int, int);

int main()
{
	int a, b;
	cin >> a >> b;
	OutPut(a, b);
	return 0;
}

int gcd(int a, int b)
{
	while (b)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void OutPut(int a, int b)
{
	for (int i = a; i <= b; ++i)
	{
		for (int j = i + 1; j <= b; ++j)
			if (gcd(i, j) == 1)
				cout << "(" << i << "," << j << ")" << endl;
	}
}

/*
	C++ Buổi 04_Bài 12.Cặp số nguyên tố cùng nhau.
	Hãy liệt kê các cặp số nguyên tố cùng nhau và có giá trị khác nhau trong đoạn [a,b] theo thứ tự từ nhỏ đến lớn.

	Dữ liệu vào:
	Chỉ có một dòng ghi hai số a, b.(2<=a<=b<=1000).
	Dữ liệu ra:
	Các cặp số i,j thỏa mãn được viết lần lượt trên từng dòng theo định dạng (i,j), theo thứ tự từ điển

	Dữ liệu vào:
	2 40
	Dữ liệu ra:
	(2,3)
	(2,5)
	(2,7)
	(2,9)
	(2,11)
	(2,13)
	(2,15)
	(2,17)
	(2,19)
	(2,21)
	(2,23)
	(2,25)
	(2,27)
	(2,29)
	(2,31)
	(2,33)
	(2,35)
	(2,37)
	(2,39)
	(3,4)
	(3,5)
	(3,7)
	(3,8)
	(3,10)
	(3,11)
	(3,13)
	(3,14)
	(3,16)
	(3,17)
	(3,19)
	(3,20)
	(3,22)
	(3,23)
	(3,25)
	(3,26)
	(3,28)
	(3,29)
	(3,31)
	(3,32)
	(3,34)
	(3,35)
	(3,37)
	(3,38)
	(3,40)
	(4,5)
	(4,7)
	(4,9)
	(4,11)
	(4,13)
	(4,15)
	(4,17)
	(4,19)
	(4,21)
	(4,23)
	(4,25)
	(4,27)
	(4,29)
	(4,31)
	(4,33)
	(4,35)
	(4,37)
	(4,39)
	(5,6)
	(5,7)
	(5,8)
	(5,9)
	(5,11)
	(5,12)
	(5,13)
	(5,14)
	(5,16)
	(5,17)
	(5,18)
	(5,19)
	(5,21)
	(5,22)
	(5,23)
	(5,24)
	(5,26)
	(5,27)
	(5,28)
	(5,29)
	(5,31)
	(5,32)
	(5,33)
	(5,34)
	(5,36)
	(5,37)
	(5,38)
	(5,39)
	(6,7)
	(6,11)
	(6,13)
	(6,17)
	(6,19)
	(6,23)
	(6,25)
	(6,29)
	(6,31)
	(6,35)
	(6,37)
	(7,8)
	(7,9)
	(7,10)
	(7,11)
	(7,12)
	(7,13)
	(7,15)
	(7,16)
	(7,17)
	(7,18)
	(7,19)
	(7,20)
	(7,22)
	(7,23)
	(7,24)
	(7,25)
	(7,26)
	(7,27)
	(7,29)
	(7,30)
	(7,31)
	(7,32)
	(7,33)
	(7,34)
	(7,36)
	(7,37)
	(7,38)
	(7,39)
	(7,40)
	(8,9)
	(8,11)
	(8,13)
	(8,15)
	(8,17)
	(8,19)
	(8,21)
	(8,23)
	(8,25)
	(8,27)
	(8,29)
	(8,31)
	(8,33)
	(8,35)
	(8,37)
	(8,39)
	(9,10)
	(9,11)
	(9,13)
	(9,14)
	(9,16)
	(9,17)
	(9,19)
	(9,20)
	(9,22)
	(9,23)
	(9,25)
	(9,26)
	(9,28)
	(9,29)
	(9,31)
	(9,32)
	(9,34)
	(9,35)
	(9,37)
	(9,38)
	(9,40)
	(10,11)
	(10,13)
	(10,17)
	(10,19)
	(10,21)
	(10,23)
	(10,27)
	(10,29)
	(10,31)
	(10,33)
	(10,37)
	(10,39)
	(11,12)
	(11,13)
	(11,14)
	(11,15)
	(11,16)
	(11,17)
	(11,18)
	(11,19)
	(11,20)
	(11,21)
	(11,23)
	(11,24)
	(11,25)
	(11,26)
	(11,27)
	(11,28)
	(11,29)
	(11,30)
	(11,31)
	(11,32)
	(11,34)
	(11,35)
	(11,36)
	(11,37)
	(11,38)
	(11,39)
	(11,40)
	(12,13)
	(12,17)
	(12,19)
	(12,23)
	(12,25)
	(12,29)
	(12,31)
	(12,35)
	(12,37)
	(13,14)
	(13,15)
	(13,16)
	(13,17)
	(13,18)
	(13,19)
	(13,20)
	(13,21)
	(13,22)
	(13,23)
	(13,24)
	(13,25)
	(13,27)
	(13,28)
	(13,29)
	(13,30)
	(13,31)
	(13,32)
	(13,33)
	(13,34)
	(13,35)
	(13,36)
	(13,37)
	(13,38)
	(13,40)
	(14,15)
	(14,17)
	(14,19)
	(14,23)
	(14,25)
	(14,27)
	(14,29)
	(14,31)
	(14,33)
	(14,37)
	(14,39)
	(15,16)
	(15,17)
	(15,19)
	(15,22)
	(15,23)
	(15,26)
	(15,28)
	(15,29)
	(15,31)
	(15,32)
	(15,34)
	(15,37)
	(15,38)
	(16,17)
	(16,19)
	(16,21)
	(16,23)
	(16,25)
	(16,27)
	(16,29)
	(16,31)
	(16,33)
	(16,35)
	(16,37)
	(16,39)
	(17,18)
	(17,19)
	(17,20)
	(17,21)
	(17,22)
	(17,23)
	(17,24)
	(17,25)
	(17,26)
	(17,27)
	(17,28)
	(17,29)
	(17,30)
	(17,31)
	(17,32)
	(17,33)
	(17,35)
	(17,36)
	(17,37)
	(17,38)
	(17,39)
	(17,40)
	(18,19)
	(18,23)
	(18,25)
	(18,29)
	(18,31)
	(18,35)
	(18,37)
	(19,20)
	(19,21)
	(19,22)
	(19,23)
	(19,24)
	(19,25)
	(19,26)
	(19,27)
	(19,28)
	(19,29)
	(19,30)
	(19,31)
	(19,32)
	(19,33)
	(19,34)
	(19,35)
	(19,36)
	(19,37)
	(19,39)
	(19,40)
	(20,21)
	(20,23)
	(20,27)
	(20,29)
	(20,31)
	(20,33)
	(20,37)
	(20,39)
	(21,22)
	(21,23)
	(21,25)
	(21,26)
	(21,29)
	(21,31)
	(21,32)
	(21,34)
	(21,37)
	(21,38)
	(21,40)
	(22,23)
	(22,25)
	(22,27)
	(22,29)
	(22,31)
	(22,35)
	(22,37)
	(22,39)
	(23,24)
	(23,25)
	(23,26)
	(23,27)
	(23,28)
	(23,29)
	(23,30)
	(23,31)
	(23,32)
	(23,33)
	(23,34)
	(23,35)
	(23,36)
	(23,37)
	(23,38)
	(23,39)
	(23,40)
	(24,25)
	(24,29)
	(24,31)
	(24,35)
	(24,37)
	(25,26)
	(25,27)
	(25,28)
	(25,29)
	(25,31)
	(25,32)
	(25,33)
	(25,34)
	(25,36)
	(25,37)
	(25,38)
	(25,39)
	(26,27)
	(26,29)
	(26,31)
	(26,33)
	(26,35)
	(26,37)
	(27,28)
	(27,29)
	(27,31)
	(27,32)
	(27,34)
	(27,35)
	(27,37)
	(27,38)
	(27,40)
	(28,29)
	(28,31)
	(28,33)
	(28,37)
	(28,39)
	(29,30)
	(29,31)
	(29,32)
	(29,33)
	(29,34)
	(29,35)
	(29,36)
	(29,37)
	(29,38)
	(29,39)
	(29,40)
	(30,31)
	(30,37)
	(31,32)
	(31,33)
	(31,34)
	(31,35)
	(31,36)
	(31,37)
	(31,38)
	(31,39)
	(31,40)
	(32,33)
	(32,35)
	(32,37)
	(32,39)
	(33,34)
	(33,35)
	(33,37)
	(33,38)
	(33,40)
	(34,35)
	(34,37)
	(34,39)
	(35,36)
	(35,37)
	(35,38)
	(35,39)
	(36,37)
	(37,38)
	(37,39)
	(37,40)
	(38,39)
	(39,40)
*/
