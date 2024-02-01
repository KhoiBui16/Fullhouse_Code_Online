/*
    C++ Buổi 17_Bài 02.Check Số.
    Một số được coi là số đẹp nếu nó có tất cả các chữ số là số nguyên tố và tổng các chữ số của nó cũng là số nguyên tố. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?.Nếu phải in ra màn hình YES ngược lại in NO.

    Input Format
    Dòng duy nhất chứa số nguyên N không quá 1000 chữ số.

    Output Format
    In ra đáp án bài toán.

    Ví dụ:
    Dữ liệu vào:
    23
    Dữ liệu ra:
    YES

*/

#include <iostream>
#include <string>
using namespace std;


bool isPrime(long long n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

bool SoDep(string s)
{
	int sum = 0;
	for (int i = 0; i < s.size(); i++)
	{
		int digit = s[i] - '0';
		if (digit != 2 && digit != 3 && digit != 5 && digit != 7)
			return false;
		sum += digit;
	}
	return isPrime(sum);
}

int main()
{
	string s;
	cin >> s;
	if (SoDep(s) == true)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}

/*
    Cách 2: tốc độ chạy nhanh hơn 0.02s
    #include <iostream>
#include <string>
using namespace std;


bool isPrime(long long n)
{
	if (n < 2)
		return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

bool SoDep(string s)
{
	int sum = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7')
			return false;
		sum += (s[i] - '0');
	}
	return isPrime(sum);
}

int main()
{
	string s;
	cin >> s;
	if (SoDep(s) == true)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}

*/