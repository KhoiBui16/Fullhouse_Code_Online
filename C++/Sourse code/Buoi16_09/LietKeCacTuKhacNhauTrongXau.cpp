/*
	C++ Buổi 16_Bài 09.Liệt kê các từ khác nhau trong xâu.
	Cho một xâu kí tự S bao gồm các chữ cái và dấu cách,hãy liệt kê các từ khác nhau trong xâu S, đầu tiên hãy liệt kê các từ khác nhau theo thứ tự từ điển tăng dần, sau đó cách một dấu cách rồi liệt kê các từ theo thứ tự xuất hiện trong xâu.

	Input Format
Dòng duy nhất chứa xâu S có độ dài không quá 1000 kí tự.

	Output Format
	Dòng đầu tiên in ra các trong xâu theo thứ tự từ điển.

	Dòng thứ hai in ra các từ theo thứ tự xuất hiện trong xâu.

	Ví dụ:
	Dữ liệu vào:
	lap   trinh java web java   php web
	Dữ liệu ra:
	java lap php trinh web
	lap trinh java web php
*/

#include <iostream>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	set<string> se;
	vector<string> v;
	stringstream ss(s);
	string word;
	while (ss >> word)
	{
		se.insert(word);
		v.push_back(word);
	}

	for (string element : se)
		cout << element << " ";
	cout << endl;
	for (string it : v)
	{
		if (se.count(it) != 0)
		{
			cout << it << " ";
			// cập nhật xóa it đó để tránh lặp
			se.erase(it);
		}
	}

	return 0;
}
