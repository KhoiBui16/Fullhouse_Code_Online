/*
	C++ Buổi 16_Bài 13.Sắp xếp các từ trong xâu theo thứ tự từ điển.
	Cho một xâu
	Cho một xâu S có không quá 1000 kí tự, thực hiện sắp xếp các từ trong xâu theo thứ tự từ điển tăng dần.

	Input Format
	Dòng duy nhất
	Dòng duy nhất chứa xâu S không quá 1000 kí tự.

	Output Format
	In ra các từ theo thứ tự từ điển tăng dần.

	Ví dụ:
	Dữ liệu vào:
	dfkffnr 233rfd 1idid   sdegrt9
	Dữ liệu ra:
	1idid 233rfd dfkffnr sdegrt9
*/

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string s;
	getline(cin, s);

	stringstream ss(s);
	string word;
	
	vector <string> v;
	while (ss >> word)
	{
		v.push_back(word);
	}
	sort(v.begin(), v.end());
	for (auto x : v)
		cout << x << " ";
	return 0;
}