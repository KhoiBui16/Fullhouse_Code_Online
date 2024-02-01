/*
    C++ Buổi 16_Bài 19.Xâu con liên tiếp các kí tự giống nhau.

    Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp chứa các kí tự giống nhau dài nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

    Input Format
    Một dòng duy nhất chứa xâu S, không quá 1000 kí tự.

    Output Format
    In ra đáp án đề bài.

    Ví dụ:
    Dữ liệu vào:
    gjjjhaavrrr
    Dữ liệu ra:
    rrr

*/

#include <iostream>
#include <string>
using namespace std;

char soSanhTu(char a, char b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	string str;
	getline(cin, str);
	char KyTu = str[0];
	int len = 1;
	int Max_length = 1;

	for (int i = 1; i <= str.size(); i++)
	{
		if (str[i] == str[i - 1])
			len++;

		else
		{
			if (len > Max_length)
			{
				Max_length = len;
				KyTu = str[i - 1];			
			}
			if (len == Max_length)
			{
				KyTu = soSanhTu(KyTu, str[i - 1]);

			}
			len = 1;
		}
	}

	for (int i = 0; i < Max_length; i++)
		cout << KyTu;

	return 0;
}