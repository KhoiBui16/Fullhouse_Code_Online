/*
	C++ Buổi 16_Bài 10.Tần suất xuất hiện của ký tự.
	Cho một xâu kí tự s ,hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.

	Input Format
	Xâu kí tự có độ dài không quá 1000 chỉ bao gồm chữ cái.

	Output Format
	Đầu tiên in ra các ký tự và tần suất xuất hiện của các ký tự ở trong xâu theo thứ tự từ điển tăng dần, sau đó cách ra một dòng và in ra tần suất xuất hiện của các ký tự theo thứ tự xuất hiện trong xâu(mỗi kí tự chỉ in 1 lần)

	Ví dụ:
	Dữ liệu vào:
	bacedcasbdf
	Dữ liệu ra:
	a 2
	b 2
	c 2
	d 2
	e 1
	f 1
	s 1

	b 2
	a 2
	c 2
	e 1
	d 2
	s 1
	f 1
*/

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	map <char, int> mp;

	for (char x : s)
		mp[x]++;

	for (auto it : mp)
		cout << it.first << " " << it.second << endl;
	cout << endl;
	
	vector<char> v;
	for (char x : s)
		if (find(v.begin(), v.end(), x) == v.end())
		{
			cout << x << " " << mp[x] << endl;
			// đẩy ký tự x đã xuất hiện vào trong v để không bị in ra lặp nữa
			v.push_back(x);
		}

	return 0;
}