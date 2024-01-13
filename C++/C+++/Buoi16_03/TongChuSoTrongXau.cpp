/*
	C++ Buổi 16_Bài 03.Tổng chữ số trong xâu.
	Cho một xâu kí tự chỉ bao gồm chữ số và chữ cái, hãy tính tổng chữ số xuất hiện trong xâu.
	Ví dụ ta có 1 xâu "12dsfj4hsd80ksdj150" khi đó tổng chữ số sẽ là 12+4+80+150 = 246
	Input Format
	Xâu đầu vào không quá 1000 kí tự.

	Output Format
	In ra tổng chữ số xuất hiện trong xâu.

	Ví dụ:
	Dữ liệu vào:
	12dsfj4hsd80ksdj150

	Dữ liệu ra:
	246

*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int SumOfDigits(string);

int main()
{
	string s;
	getline(cin, s);
	
	int res = SumOfDigits(s);
	cout << res;
	return 0;
}

int SumOfDigits(string s)
{
	// Trong đoạn code có lấy str +=’a’ đó là vì nếu số cuối là chữ số
	//thì sum sẽ không cộng thêm được số cuối cùng của chuỗi nên mk cộng thêm
	s += 'a';
	int number = 0;
	int sum = 0;
	for (auto x : s)
	{
		// Nếu x là chữ số thì ghép vào số trước đó
		if (isdigit(x))
			number = number * 10 + (x - '0'); // cộng chuỗi
		else
		{
			// Khi gặp chữ cái => kết thức chữ số rồi cộng vào tổng
			sum += number;
			// đặt giá trị của number về lại 0 => tìm chữ số mới
			number = 0;
		}
	}
	return sum;
}

/*
// Cách 2
int SumOfDigits(string s)
{
	// cộng vị trí 
	s += 'a';
	string num = '0';
	long long sum = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (isdigit(s[i]) == true)
		{
			num += s[i];
		}
		else // !(isdigit(s[i]) == true)
		{
			sum += stoll(num);
			num = "0";
		}
	}
	return sum;
}
*/
