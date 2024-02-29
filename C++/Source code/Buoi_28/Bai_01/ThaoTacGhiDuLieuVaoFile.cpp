/*
    C++ Buổi 28_Bài 01.Thao tác ghi dữ liệu vào File.
    Bạn hãy tạo 1 File có tên FH.txt sau đó mở File ra và ghi dữ liệu vào File đấy.Sau đó kiểm tra xe nội dung đã được ghi vài File chưa.

    Input Format:
    Là 1 xâu kí tự không quá 50 kí tự

    Output Format
    Nội dung của File FH.txt

    Ví dụ:
    Dữ liệu vào:
    FH tat ca la mot nha!

    Dữ liệu ra: FH.txt
    FH tat ca la mot nha!
*/

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fileOut;
    fileOut.open("FH.txt");
    string str;
    getline(cin, str);
    fileOut << str;
    fileOut.close();
    return 0;
}