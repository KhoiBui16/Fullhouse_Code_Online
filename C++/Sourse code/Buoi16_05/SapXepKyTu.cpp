/*
	C++ Buổi 16_Bài 05.Sắp xếp kí tự.
	Cho xâu kí tự S, tiến hành sắp xếp kí tự trong xâu S theo thứ tự giảm dần, 
	tăng dần theo thứ tự từ điển rồi in ra màn hình.
	Input Format
	Dòng duy nhất
	Dòng duy nhất chứa xâu S không quá 1000 kí tự.

	Output Format
	Dòng 1 in ra xâu S sau khi sắp giảm dần.

	Dòng 2 in ra xâu S sau khi sắp tăng dần.

	Ví dụ:
	Dữ liệu vào:
	asdfuytawf4676810

	Dữ liệu ra:
	ywutsffdaa8766410
	0146678aadffstuwy
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	string s;
	getline(cin, s);

	// Sắp xếp tăng dần
	sort(s.begin(), s.end(), greater<char>());
	cout << s << endl;
	reverse(s.begin(), s.end());
	cout << s;

	return 0;
}

