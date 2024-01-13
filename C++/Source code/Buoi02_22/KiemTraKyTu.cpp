/*
	C++ Buổi 02_Bài 22.Kiểm tra kí tự.
	Cho một kí tự, bạn hãy kiểm tra kí tự nhập vào là 
		+ chữ cái in hoa, 
		+ in thường, 
		+ chữ số 
		+ hay kí tự đặc biệt(các kí tự không phải là chữ cái và chữ số).
	- Nếu kí tự là chữ cái in hoa in ra "UPPER". 
	- Nếu c là chữ cái in thường in ra "LOWER". 
	- Nếu c là chữ số in ra "DIGIT". 
	- Nếu c là kí tự đặc biệt in ra "SPECIAL".
	Dữ liệu vào:
	a
	Dữ liệu ra:
	LOWER
*/

#include <iostream>

using namespace std;

int main()
{
	char n;
	cin >> n;
	if (n >= 'a' && n <= 'z') 
		cout << "LOWER";
	else if (n >= 'A' && n <= 'Z') 
		cout << "UPPER";
	else if (n >= '0' && n <= '9') 
		cout << "DIGIT";
	else 
		cout << "SPECIAL";
	return 0;
}