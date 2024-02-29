/*
    C++ Buổi 28_Bài 02.Thao tác mở File để đọc dữ liệu.
    Cho bạn File có sẵn có tên là input.txt sau đó mở File ra và đọc dữ liệu vào in ra màn hình nội dung của File đấy.

    Ví dụ:
    Dữ liệu vào:
    input.txt

    FH tat ca la mot nha!

    Dữ liệu ra:
    FH tat ca la mot nha!
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fileIn;
    fileIn.open("input.txt");

    if (fileIn.is_open())
    {
        string str;
        getline(fileIn, str);
        cout << str << endl;
    }
    else
    {
        cout << "FIle bi loi trong qua trinh mo!\n";
    }

    fileIn.close();
    return 0;
}

