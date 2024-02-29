/*
    C++ Buổi 28_Bài 03.Sắp xếp dãy số.
    Cho bạn 1 file text có tên "inputNumber.txt" chứa không quá 100000 số nguyên không biết trước số lượng phần tử.Bạn hãy đọc mọi số trong File ra và ghi vào File có tên "outputNumber.txt" theo thứ tự tăng dần nhé.

    Input Format:
    Là 1 dãy số gồm các số nguyên có thể nằm khác hàng(nhìn test mẫu để rõ)

    Output Format
    Dãy số đã được sắp xếp tăng dần.

    Ví dụ:
    Dữ liệu vào:
    inputNumber.txt

    5 2
    8 5 3 1
    64 4
    7
    Dữ liệu ra:
    outputNumber.txt

    1 2 3 4 5 5 7 8 64
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // Đọc file
    ifstream fileIn;
    fileIn.open("inputNumber.txt");

    // Ghi file
    ofstream fileOut;
    fileOut.open("outputNumber.txt");

    if (fileIn.is_open())
    {
        int temp;
        vector<int> list;
        while (fileIn >> temp)
            list.push_back(temp);
        sort(list.begin(), list.end());

        for (int it : list)
        {
            fileOut << it << " ";
        }

    }   
    else
    {
        cout << "Loi moi file!\n";
    }

    fileIn.close();
    fileOut.close();
    return 0;
}