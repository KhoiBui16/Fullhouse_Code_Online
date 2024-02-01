/*
    C++ Buổi 17_Bài 01.Tổng chữ số của số nguyên.
    Cho một số nguyên không âm N, hãy tính tổng các chữ số của N.

    Input Format
    Số nguyên không âm N, không quá 1000 chữ số.

    Output Format
    In ra tổng chữ số

    Ví dụ:
    Dữ liệu vào:
    123456
    Dữ liệu ra:
    21
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	long long sum = 0;
	for (char x : s)
	{
		sum += (x - '0');
	}
	cout << sum;

	return 0;
}