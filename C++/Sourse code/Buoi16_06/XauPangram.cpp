/*
	C++ Buổi 16_Bài 06.Xâu Pangram.
	Xâu pangram là Xâu pangram là xâu có chứa đầy đủ các kí tự từ a->z không phân biệt chữ hoa hay thường. Nhập vào xâu S và kiểm tra xem xâu S có phải là xâu pangram hay không?

	Input Format
	Xâu kí tự S chỉ bao gồm các kí tự in hoa hoặc in thường và không quá 1000 kí tự.

	Output Format
	In ra YES nếu S là xâu pangram, ngược lại in NO.

	Ví dụ:
	Dữ liệu vào:
	the quick brown fox jumps over the lazy dog
	Dữ liệu ra:
	YES
*/

#include <iostream>
#include <string>
#include <cctype>
#include <map>
#include <set>
using namespace std;

bool KtPangram(string&);

int main()
{
	string s;
	getline(cin, s);

	if (KtPangram(s))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}

bool KtPangram(string& s)
{
	set<char> setChar;
	
	for (char x : s)
	{
		if (isalpha(x))
			setChar.insert(tolower(x));
	}
	if (setChar.size() == 26)
		return true;
	return false;
}