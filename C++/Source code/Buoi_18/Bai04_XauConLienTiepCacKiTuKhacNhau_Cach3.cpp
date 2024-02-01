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


    //Cách 3: 
#include <iostream>
#include <string>

using namespace std;

string XauConKiTuKhacNhau(string& str) {
    string current, result;
    int maxLength = 0, currentLength = 0;

    for (char ch : str) {
        if (current.empty() || ch != current.back()) {
            current += ch;
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                result = current;
            }
            else if (currentLength == maxLength) {
                result = max(result, current);
            }
            current = ch;
            currentLength = 1;
        }
    }

    //Kiểm tra xâu con cuối cùng
    if (currentLength > maxLength) {
        result = current;
    }
    else if (currentLength == maxLength) {
        result = max(result, current);
    }

    return result;
}

int main() {
    string s;
    cin >> s;
    cout << XauConKiTuKhacNhau(s) << endl;
    return 0;
}

