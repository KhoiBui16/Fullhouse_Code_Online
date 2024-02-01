/*
    C++ Buổi 18_Bài 05.Ghép số.
    Cho một xâu kí tự S chỉ bao gồm các chữ cái và chữ số, hãy thực hiện tách các số xuất hiện trong xâu ra và ghép lại với nhau để tạo thành một số tự nhiên lớn nhất.Ví dụ với xâu S = "69205hdet42yr6" thì ta sẽ tách được các số 69205, 42 và 6, trong trường hợp các số bắt đầu bằng chữ số 0 thì ta loại bỏ các số 0 vô nghĩa này. Sau đó ghép lại với nhau thành số 69205426 là số lớn nhất có thể đạt được.

    Input Format
    Dòng duy nhất chứa xâu S không quá 1000 kí tự.

    Output Format
    In ra số lớn nhất ghép được.

    Ví dụ:
    Dữ liệu vào:
    69205hdet42yr6
    Dữ liệu ra:
    69205426
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string GhepSo(string&);
bool Compare(string, string);

int main()
{
    string str;
    cin >> str;
    str = GhepSo(str);
    cout << str;

    return 0;
}

string GhepSo(string& str)
{
    str += 'a';
    vector<string> dayso;
    string number = "";
    for (char x : str)
    {
        if (isdigit(x))
            number += x;
        else
        {
            int i = 0;
            while (number[i] == 0)
                i++;
            if (number.size() > 0)
                dayso.push_back(number.substr(i)); 
            // ham substr cat xau con tu vi tri i va den het xau moi neu ko co do dai
            number = "";
        }
    }
    // sort(dayso.begin(), dayso.end(), Compare); Cach thong thuong
    sort(dayso.begin(), dayso.end(), [](string a, string b) 
    {
        return a + b > b + a;
    });
    // doi so thu 3 trong ham sort la su dung ham lamdba: 1 dang ham an ko can ten goi
    /*
        [](string a, string b) {return a + b > b + a;}
        <=> bool Compare(string a, string b)
        {
            return a + b > b + a;
        }        
    */

    for (auto it : dayso)
        number += it;
    return number;
}

bool Compare(string a, string b)
{
    return a + b > b + a;
}