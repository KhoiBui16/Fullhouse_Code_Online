/*
	C++ Buổi 16_Bài 17.Tạo Email cho người dùng.
	Cho một xâu kí tự,là tên của người dùng bạn hãy thực hiện tạo email từ tên người dùng.

	Input Format
	Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường.Xâu kí tự không quá 1000 kí tự.

	Output Format
	In ra Email của người dùng.

	Ví dụ:
	Dữ liệu vào:
	PhaN    VAn haI
	Dữ liệu ra:
	haipv@gmail.com
*/

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

void ChuanHoa(string&);

int main()
{
	string s;
	getline(cin, s);
	ChuanHoa(s);
	stringstream ss(s);
	string word;
	vector<string> v;

	while (ss >> word)
	{
		// lưu các từ ở dạng in thường
		v.push_back(word);
	}

	// lưu tên cuối cùng vào mail
	string email = v[v.size() - 1];
	string Gmail = "@gmail.com";
	for (int i = 0; i < v.size() - 1; i++)
		email += v[i][0]; // chỉ lấy những ký tự đầu trong họ tên trừ tên gán vào phía sau mail
	
	// nối chuỗi định dạng của gmail vô mail => thành email hoành chỉnh
	email += Gmail;
	cout << email;
	return 0;
}

void ChuanHoa(string &s)
{
	for (int i = 0; i < s.length(); i++)
		s[i] = tolower(s[i]);
}