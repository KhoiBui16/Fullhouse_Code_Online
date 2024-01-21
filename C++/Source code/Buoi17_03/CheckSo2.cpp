/*
    C++ Buổi 17_Bài 03.Check số 2.
    Một số được coi là số đẹp nếu nó có các chữ số không giảm từ trái qua phải hoặc không tăng từ trái quá phải. Hãy viết chương trình kiểm tra số nguyên dương N cho trước có phải là số đẹp hay không?

    Input Format
    Số nguyên dương N, không quá 1000 chữ số.

    Output Format
    In ra YES nếu N là số đẹp ngược lại lại ra NO.

    Ví dụ:
    Dữ liệu vào:
    123445677789
    Dữ liệu ra:
    YES
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int flag = 1;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if ((str[i] - '0') > (str[i + 1] - '0'))
            flag = 0;
    }
    if (flag == 1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}