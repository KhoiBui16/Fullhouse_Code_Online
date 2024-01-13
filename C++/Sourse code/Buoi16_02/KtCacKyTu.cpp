/*
	C++ Buổi 16_Bài 02.Đếm số lượng chữ cái, kí tự số, kí tự đặc biệt.
	Đếm số lượng
	Đếm số lượng chữ cái, kí tự số, kí tự đặc biệt trong xâu.
	Input Format
	Xâu đầu vào không quá 1000 kí tự.

	Output Format
	In kết quả số lượng chữ cái(không phân biệt hoa thường), kí tự số, kí tự đặc biệt trên 1 dòng.

	Ví dụ:
	Dữ liệu vào:
	JaVa  8@
	Dữ liệu ra:
	4 1 3
*/


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	int digit = 0, alpha = 0, special = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
			alpha++;
		if (isdigit(s[i]))
			digit++;
	}
	special = s.length() - alpha - digit;
	cout << alpha << ' ' << digit << ' ' << special;

	return 0;
}