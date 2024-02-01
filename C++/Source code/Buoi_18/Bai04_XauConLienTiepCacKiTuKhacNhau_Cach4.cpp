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

    //Cách 4:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string XauConKhacNhauDaiNhat(string& str)
{
    int n = str.size();
    int maxLength = 1;
    int currentLength = 1;
    string currentStr = str.substr(0, 1);  // Bắt đầu từ ký tự đầu tiên

    for (int i = 1; i < n; i++)
    {
        if (str[i] != str[i - 1])
        {
            currentStr += str[i];
            currentLength++;
        }
        else
        {
            currentStr = str[i];  // Bắt đầu xây dựng xâu con mới
            currentLength = 1;
        }

        if (currentLength > maxLength)
        {
            maxLength = currentLength;
        }
    }

    //Sử dụng vector để lưu trữ tất cả các xâu con có độ dài lớn nhất
    vector<string> xauCon;
    currentStr = str.substr(0, 1);  // Bắt đầu từ ký tự đầu tiên
    currentLength = 1;

    for (int i = 1; i < n; i++)
    {
        if (str[i] != str[i - 1])
        {
            currentStr += str[i];
            currentLength++;
        }
        else
        {
            if (currentLength == maxLength)
            {
                xauCon.push_back(currentStr);
            }
            currentStr = str[i];
            currentLength = 1;
        }
    }

    //Kiểm tra xâu con cuối cùng
    if (currentLength == maxLength)
    {
        xauCon.push_back(currentStr);
    }

    //Sắp xếp theo thứ tự từ điển và chọn xâu lớn nhất
    sort(xauCon.begin(), xauCon.end(), greater<string>());

    return xauCon[0];
}

int main()
{
    string s;
    cin >> s;
    string res = XauConKhacNhauDaiNhat(s);
    cout << res;
    return 0;
}

