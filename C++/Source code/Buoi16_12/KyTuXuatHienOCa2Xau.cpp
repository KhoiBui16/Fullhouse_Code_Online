/*
	C++ Buổi 16_Bài 12.Ký tự xuất hiện ở cả 2 xâu.
	Cho 2 xâu kí tự S1 và S2 không quá 1000 kí tự,hãy in ra các kí tự xuất hiện ở cả 2 xâu theo thứ tự từ điển, chú ý mỗi kí tự chỉ liệt kê một lần. Sau đó tiếp tục liệt kê các kí tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển.

	Input Format
	Dòng đầu tiên là xâu S1. Dòng thứ 2 là xâu S2. Các ký tự trong 2 xâu chỉ bao gồm chữ cái in hoa hoặc in thường.

	Output Format
	Dòng 1 in ra các ký tự xuất hiện ở cả 2 xâu theo thứ tự từ điển tăng dần.

	Dòng 2 in ra các ký tự xuất hiện ở 1 trong 2 xâu theo thứ tự từ điển tăng dần.

	Ví dụ:
	Dữ liệu vào:
	mabchrirhgwaq
	hvndcnmandnce
	Dữ liệu ra:
	achm
	abcdeghimnqrvw
*/

#include <iostream>
#include <string>
#include <set>
#include <map>
using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	map<char, int> mp;

	for (char x : s1)
		mp[x] = 1; // đánh dấu những ký tự xuất hiện ở xâu 1 là 1

	for (char it : s2)
	{
		if (mp[it] == 1)
			mp[it] = 2; // kiểu tra nếu kí tự ở xâu 2 có xuất hiện ở xâu 1 thì cập nhật lên 2
		else if (mp[it] != 1 && mp[it] != 2)
			mp[it] = 3;
		// nếu mà ký tự chưa xuất hiện ở xâu 1 cũng cũng như ở cả 2 xâu thì cập nhập thành 3
		// nghĩa là cập nhật bằng 3 là các ký tự chỉ xuất hiện ở xâu 2
	}

	// in ra các ký tự xuất hiện ở cả 2 xâu
	for (auto element : mp)
		if (element.second == 2)
			cout << element.first;
	cout << endl;

	// những ký tự nào đã xuất hiện trong map của 1 trong 2 xâu sẽ được sắp xếp tăng dần trong map => chỉ cần xuất các thành phần trong map ra thôi
	for (auto it : mp)
		cout << it.first;
	return 0;
}

/*	Cách 2
string s1, s2;
getline(cin, s1);
getline(cin, s2);

set<char> se;
set<char> se1;

for (char it : s1)
{
	for (char x : s2)
	{
		if (it == x)
			se.insert(x);
		se1.insert(x);
	}
	se1.insert(it);
}

for (char element : se)
	cout << element;
cout << endl;
for (char it : se1)
	cout << it;
*/