/*
    C++ Buổi 17_Bài 05.Số chia hết cho 3.
    Nhập vào một số nguyên không âm N và kiểm tra xem số đó có chia hết cho 3 hay không.(Là các số có tổng các chữ số chia hết cho 3 thì số đó chia hết cho 3).

    Input Format
    Số nguyên không âm N, không quá 1000 chữ số.

    Output Format
    In ra YES nếu N là số chia hết cho 3, ngược lại in ra NO.

    Ví dụ:
    Dữ liệu vào:
    123456
    Dữ liệu ra:
    YES
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    
    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        sum += (str[i] - '0');
    }
    if (sum % 3 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}