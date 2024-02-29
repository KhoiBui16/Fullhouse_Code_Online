/*
    C++ Buổi 28_Bài 04.Check Số Nguyên Tố.

    Cho bạn 1 file text có tên "inputNumber.txt" chứa không quá 100000 số nguyên không biết trước số lượng phần tử.Bạn hãy đọc mọi số trong File này ra và ghi vào File khác có tên "outputPrime.txt" những số là số nguyên tố theo thứ tự tăng dần nhé.

    Input Format:
    Là 1 dãy số gồm các số nguyên có thể nằm khác hàng(nhìn test mẫu để rõ)

    Output Format
    Dãy số nguyên tố đã được sắp xếp tăng dần.

    Ví dụ:
    Dữ liệu vào:
    inputNumber.txt

    5 2
    8 5 3 1
    64 4
    7
    Dữ liệu ra:
    outputPrime.txt

    2 3 5 5 7
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ifstream fileIn;
    fileIn.open("inputNumber.txt");

    ofstream fileOut;
    fileOut.open("outputPrime.txt");

    if (fileIn.is_open())
    {
        int temp;
        vector<int> list;
        while (fileIn >> temp)
        {
            if (isPrime(temp))
                list.push_back(temp);
        }

        sort(list.begin(), list.end());
        for (int it : list)
            fileOut << it << " ";
    }
    else
    {
        cout << "Loi mo file!\n";
    }

    fileIn.close();
    fileOut.close();

    return 0;
}