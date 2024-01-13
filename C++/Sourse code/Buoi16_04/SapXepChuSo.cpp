/*
	C++ Buổi 16_Bài 04.Sắp xếp chữ số.
	Cho số nguyên không âm N, hãy tiến hành sắp xếp các chữ số của N theo thứ tự tăng dần rồi in ra màn hình, trong trường hợp số sau khi sắp xếp xuất hiện các chữ số 0 ở đầu thì ra không in những chữ số 0 vô nghĩa này.

	Input Format
	Dòng duy nhất chứa số nguyên dương N (0<=N<=10^18)

	Output Format
	In ra số N sau khi sắp xếp.

	Ví dụ:
	Dữ liệu vào:
	1654890237
	Dữ liệu ra:
	123456789
*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	string s = to_string(n);
	sort(s.begin(), s.end());
	if (s[0] == '0')
	{
		long long n1 = stoll(s);
		cout << n1;
	}
	else
		cout << s;
	
	return 0;
}