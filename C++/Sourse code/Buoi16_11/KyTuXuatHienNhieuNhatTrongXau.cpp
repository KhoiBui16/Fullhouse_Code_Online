/*
	C++ Buổi 16_Bài 11.Ký tự xuất hiện nhiều nhất trong xâu.
	Cho một xâu kí tự S, hãy tìm kí tự có số lần xuất hiện nhiều nhất ở trong xâu. Trong trường hợp có nhiều kí tự có cùng số lần xuất hiện lớn nhất thì in ra kí tự có thứ tự từ điển lớn nhất.

	Input Format
	Xâu kí tự S chỉ bao gồm chữ cái in hoa và in thường và không quá 1000 kí tự.

	Output Format
	In ra từ có số lần suất hiện nhiều nhất và số lần xuất hiện tương ứng cách nhau 1 dấu cách.

	Ví dụ:
	Dữ liệu vào:
	modmpoemdpeomapoqopekifrmovmxmomsomporfvomtmtb
	Dữ liệu ra:
	m 11
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	map<char, int> mp;

	for (char it : s)
		mp[it]++;
	pair<char, int> sol;
	sol.second = 0;

	for (auto x : mp)
	{
		if (x.second > sol.second)
		{
			sol.second = x.second;
			sol.first = x.first;
		}
	}
	// tìm được tần suất lớn nhất

	for (auto it : mp)
	{
		if (it.second == sol.second)
		{
			if (it.first > sol.first)
				sol.first = it.first;
		}
	}
	cout << sol.first << " " << sol.second;

	return 0;
}