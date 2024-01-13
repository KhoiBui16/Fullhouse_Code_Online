/*
	C++ Buổi 16_Bài 01.Chuyển đổi in thường.
	Nhập vào một
	Nhập vào một xâu kí tự và chuyển các kí tự trong xâu thành kí tự in thường.
	Input Format
	Xâu đầu vào không quá 1000 kí tự.

	Output Format
	In xâu đã chuyển đổi trên 1 dòng.

	Ví dụ:
	Dữ liệu vào:
	LAp TrInH  C++

	Dữ liệu ra:
	lap trinh  c++
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
	cout << s;
	return 0;
}