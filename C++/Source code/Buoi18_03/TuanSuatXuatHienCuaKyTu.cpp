/*
    C++ Buổi 18_Bài 03.Tần suất xuất hiện của ký tự.(Dùng mảng đánh dấu hoặc Map)
    Cho một xâu kí tự s ,hãy đếm tần suất xuất hiện của các kí tự trong xâu và in ra theo yêu cầu.

    Input Format
    Xâu kí tự có độ dài không quá 1000 chỉ bao gồm chữ cái.

    Output Format
    Đầu tiên in ra các ký tự và tần suất xuất hiện của các ký tự ở trong xâu theo thứ tự từ điển tăng dần, sau đó cách ra một dòng và in ra tần suất xuất hiện của các ký tự theo thứ tự xuất hiện trong xâu(mỗi kí tự chỉ in 1 lần)

    Ví dụ:
    Dữ liệu vào:
    bacedcasbdf
    Dữ liệu ra:
    a 2
    b 2
    c 2
    d 2
    e 1
    f 1
    s 1

    b 2
    a 2
    c 2
    e 1
    d 2
    s 1
    f 1
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    map<char,int> mp;
    set<char> se;

    for (int i = 0; i < str.length(); i++)
    {
        mp[str[i]]++;
        se.insert(str[i]);
    }
    for (pair<char, int> it : mp)
        cout << it.first << " " << it.second << endl;
    cout << endl;

    for (char x : str)
    {
        if (se.find(x) != se.end())
        {
            cout << x << " " << mp[x] << endl;
            se.erase(x);
        }
    }
    
    return 0;
}