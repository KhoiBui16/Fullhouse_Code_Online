/*
	C++ Buổi 16_Bài 15.Chuẩn hóa tên.
	Nhập vào danh sách tên của các nhân viên trong công ty mỗi dòng là xâu tên của 1 người(Tên người là một xâu có thể không chuẩn).Chuẩn hóa là viết hoa chữ cái đầu của từng từ trong tên người.

	Input Format
	Dòng đầu tiên là số lượng nhân viên T (1≤T≤100).

	T dòng tiếp theo mỗi dòng chứa tên của 1 nhân viên không quá 1000 kí tự.

	Output Format
	In tên người đã được chuẩn hóa trên từng dòng.

	Ví dụ:
	Dữ liệu vào:
	2
	NguYEN VAN    maNH
	nGUYEN thuY LinH
	Dữ liệu ra:
	Nguyen Van Manh
	Nguyen Thuy Linh
*/

#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
using namespace std;

string ChuanHoa(string&);

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		string word;

		while (ss >> word)
		{
			cout << ChuanHoa(word) << " ";
		}
		cout << endl;
	}

	return 0;
}

string ChuanHoa(string& s)
{
	for (int i = 1; i < s.size(); i++)
		s[i] = tolower(s[i]);
	s[0] = s[0];
	return s;
}