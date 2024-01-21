/*
    C++ Buổi 17_Bài 04.Số chia hết cho 2.
    Nhập vào một số nguyên không âm N và kiểm tra xem số đó có chia hết cho 2 hay không.

    Input Format
    Số nguyên không âm N, không quá 1000 chữ số.

    Output Format
    In ra YES nếu N là số chia hết cho 2, ngược lại in ra NO.

    Ví dụ:
    Dữ liệu vào:
    123445677789
    Dữ liệu ra:
    NO
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    if (str[str.size() - 1] % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}