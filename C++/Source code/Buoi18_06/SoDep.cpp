/*
    C++ Buổi 18_Bài 06.Số đẹp.
    Một số được coi là số đẹp nếu nó có tất cả các chữ số là số nguyên tố và tổng các chữ số của nó cũng là số nguyên tố. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?.Nếu phải in ra màn hình YES ngược lại in NO.

    Input Format
    Dòng duy nhất chứa xâu S không quá 1000 kí tự.

    Output Format
    In ra đáp án bài toán.

    Ví dụ:
    Dữ liệu vào:
    23
    Dữ liệu ra:
    YES
*/

#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int);
bool CheckSoDep(string);

int main()
{
    string str;
    cin >> str;

    if (CheckSoDep(str))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool CheckSoDep(string str)
{
    int sum = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (!IsPrime(str[i] - '0'))
            return false;
        sum += (str[i] - '0');
    }
    if (!IsPrime(sum))
        return false;
    return true;
}