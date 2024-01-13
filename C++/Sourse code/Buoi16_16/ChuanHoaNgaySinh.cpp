/*
	C++ Buổi 16_Bài 16.Chuẩn hóa ngày sinh.
	Nhập ngày sinh
	Nhập ngày sinh của một người theo dạng ngày/tháng/năm.Bạn hãy chuẩn hóa ngày sinh này về đúng dạng dd/mm/yyyy. Ví dụ nếu ngày sinh là 7/9/2000 thì được chuẩn hóa thành 07/09/2000.

	Input Format
	Nhập vào 1 xâu là ngày sinh của 1 người.

	Output Format
	In ra ngày sinh đã được chuẩn hóa.

	Ví dụ:
	Dữ liệu vào:
	Copy
	7/9/2000
	Dữ liệu ra:
	Copy
	07/09/2000
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	if (s[1] == '/')
		s.insert(0, "0");
	if (s[4] == '/')
		s.insert(3, "0");
	cout << s;
	return 0;
}