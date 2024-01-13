/*
	C++ Buổi 16_Bài 08.Xâu đối xứng.
	Cho xâu kí tự S gồm các từ được phân cách nhau bởi một vài dấu cách.Bạn hãy kiểm tra xem trong xâu S có từ nào là xâu đối xứng và in từ đó ra.
	Input Format
	Nhập xâu S không quá 1000 kí tự.

	Output Format
	In ra các từ đối xứng trong xâu, mỗi từ cách nhau 1 dấu cách.

	Ví dụ:
	Dữ liệu vào:
	abdeh jcidje hefeh korkfr obhgghbo dsfghjg1
	Dữ liệu ra:
	hefeh obhgghbo
*/

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool KtDoiXung(string&);

int main()
{
	string s;
	getline(cin, s);

	stringstream ss(s);
	string word;

	while (getline(ss, word, ' '))
	{
		if (KtDoiXung(word))
			cout << word << " ";
	}

	return 0;
}

bool KtDoiXung(string& s)
{
	int left = 0;
	int right = s.size() - 1;
	while (left < right)
	{
		if (s[left] != s[right])
			return false;
		left++, right--;
	}
	return true;
}