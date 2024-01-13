/*
	C++ Buổi 02_Bài 23.Chữ cái kế tiếp.
	Nhập vào 1 kí tự duy nhất và in ra chữ cái kế tiếp của nó trong bảng chữ cái ở dạng in thường, 
	ta coi chữ cái kế tiếp của z và Z là a. Nếu kí tự nhập vào không phải là chữ cái in ra INVALID.

	Nhập vào 1 kí tự bất kì.
	Dữ liệu vào:
	A
	Dữ liệu ra:
	b

	Dữ liệu vào:
	a
	Dữ liệu ra:
	b
*/

#include <iostream>

using namespace std;

int main()
{
	char n;
	cin >> n;
	if (n == 'z' || n == 'Z')
		cout << "a";
	else if (n >= 'a' && n <= 'z')
		cout << (char)(n + 1);
	else if (n >= 'A' && n <= 'Z')
		cout << (char)(n + 32 + 1);
	else 
		cout << "INVALID";
	return 0;
}