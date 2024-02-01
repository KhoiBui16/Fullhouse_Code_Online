/*
    C++ Buổi 18_Bài 04 .Xâu con liên tiếp các kí tự khác nhau.
    Cho một xâu kí tự S chỉ bao gồm các chữ cái in thường, hãy tìm xâu con liên tiếp sao cho không có 2 kí tự nào liền kề giống nhau có độ dài lớn nhất, nếu có nhiều xâu con thỏa mãn thì chọn xâu con có thứ tự từ điển lớn nhất.

    Input Format
    Một dòng duy nhất chứa xâu S, không quá 1000 kí tự.

    Output Format
    In ra đáp án đề bài.

    Ví dụ:
    Dữ liệu vào:
    gjjjhaavrrr
    Dữ liệu ra:
    jha
*/
    // Cách 1
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string XauConKhacNhauDaiNhat(string& str)
{
    int maxLength = 1;
    int currentLength = 1;
    string currentStr = "";
    vector<string> xauCon;
    // Tách các xâu con có các kí tự khác nhau và lưu trữ trong mảng xauCon
    for (int i = 0; i < str.size() - 1; i++)
    {
        if (str[i] != str[i + 1])
        {
            currentStr += str[i];
            currentLength++;
        }
        else
        {
            if (i == 0 || str[i] != str[i - 1])
                currentStr += str[i];
            if (currentLength >= maxLength && currentStr != "")
            {
                xauCon.push_back(currentStr);
            }
            currentStr = "";
            maxLength = currentLength;
            currentLength = 1; 
        }
    }

    // Xử lý trường hợp cuối cùng
    currentStr += str.back();
    if (currentLength >= maxLength && currentStr != "")
    {
        xauCon.push_back(currentStr);
    }

    // Sắp xếp theo thứ tự từ điển và chọn xâu lớn nhất
    sort(xauCon.begin(), xauCon.end(), [](string& a,string& b)
    {
        if (a.size() != b.size())
            return a.size() > b.size();
        else
        {
            return a > b;
        }
    });
        
    return xauCon[0];
}

int main()
{
    string s;
    cin >> s;   
    cout << XauConKhacNhauDaiNhat(s);
    return 0;
}






