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


    //Cách 2:
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

string XauConKiTuKhacNhau(string& str)
{
    string res = string(1, str[0]);  // Chuyển kí tự đầu tiên thành string
    int max_len = 1;
    map<int, string> xauCon;
    int s_len = 1;  // Sửa lại để bắt đầu từ 1 vì đã thêm kí tự đầu tiên vào res

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] != str[i - 1])
        {
            res += str[i];
            s_len++;
        }    
        else
        {
            if (s_len > max_len)
            {
                max_len = s_len;
                xauCon[s_len] = res;  // Sửa lại từ insert sang gán trực tiếp
            }
            else if (s_len == max_len)
            {
                xauCon[s_len] = max(xauCon[s_len], res);  // Lấy xâu có thứ tự từ điển lớn nhất
            }
            
            res = str[i];  // Sửa lại để bắt đầu xâu con mới từ kí tự hiện tại
            s_len = 1;
        }
    }

    //Xử lý xâu con cuối cùng
    if (s_len > max_len)
    {
        xauCon[s_len] = res;
    }
    else if (s_len == max_len)
    {
        xauCon[s_len] = max(xauCon[s_len], res);  // Lấy xâu có thứ tự từ điển lớn nhất
    }

    //Trả về xâu con có độ dài lớn nhất và có thứ tự từ điển lớn nhất
    return xauCon.rbegin()->second;
}

int main()
{
    string s;
    cin >> s;
    cout << XauConKiTuKhacNhau(s) << endl;
    return 0;
}

