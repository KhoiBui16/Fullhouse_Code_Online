/*
	C++ Buổi 16_Bài 14.Sắp xếp các từ trong xâu theo chiều dài.
	Cho một xâu S có không quá 1000 kí tự, thực hiện sắp xếp các từ trong xâu theo thứ tự chiều dài tăng dần, trong trường hợp có nhiều từ có cùng chiều dài thì từ có thứ tự từ điển nhỏ hơn sẽ xếp trước.

	Input Format
	Dòng duy nhất chứa xâu S có không quá 1000 kí tự.

	Output Format
	Liệt kê các từ trong xâu theo thứ tự đầu bài yêu cầu.

	Ví dụ:
	Dữ liệu vào:
	sadfe ssfsr abcd abce dsr wert 2356   9799der 13gfgbyjuuj
	Dữ liệu ra:
	dsr 2356 abcd abce wert sadfe ssfsr 9799der 13gfgbyjuuj
*/

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(string, string);

int main()
{
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	vector<string> v;

	while (ss >> word)
	{
		v.push_back(word);
	}
	sort(v.begin(), v.end(), cmp);	
	for (auto x : v)
		cout << x << " ";
	return 0;
}

bool cmp(string s1, string s2)
{
	if (s1.size() == s2.size())
		return s1 < s2;
	else
		return s1.length() < s2.length();
}