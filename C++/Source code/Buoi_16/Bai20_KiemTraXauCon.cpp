/*
    C++ Buổi 16_Bài 20.Kiểm tra xâu con.
    Cho 2 xâu S và T chỉ bao gồm các chữ cái in hoa, in thường và dấu cách. Hãy kiểm tra xem xâu T có phải là xâu con của xâu S hay không?

    Input Format
    Dòng đầu tiên là xâu S. Dòng thứ 2 là xâu T và độ dài của 2 xâu không quá 1000 kí tự.

    Output Format
    In ra YES nếu xâu T là xâu con của S, ngược lại in ra NO.

    Ví dụ:
    Dữ liệu vào:
    dfghuyopi
    huyop
    Dữ liệu ra:
    YES
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);

    if (s.find(t) != string::npos)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}