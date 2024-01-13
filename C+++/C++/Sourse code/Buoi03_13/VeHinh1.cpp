/*
	C++ Buổi 03_Bài 13.Vẽ hình 1.
    Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.
	In ra 4 hình sao theo mẫu:

	Dữ liệu vào:
	5
	Dữ liệu ra:

	*****
	*****
	*****
	*****	
	*****

	*****
	*   *
	*   *
	*   *
	*****

	*****
	*###*
	*###*
	*###*
	*****

	1 1 1 1 1
	2       2
	3       3
	4       4
	5 5 5 5 5
*/

#include <iostream>

using namespace std;
short int n;

void Hinh1();
void Hinh2();
void Hinh3();
void Hinh4();

int main()
{
    cin >> n;
    Hinh1();
    cout << endl;
    Hinh2();
    cout << endl;
    Hinh3();
    cout << endl;
    Hinh4();
    return 0;
}

void Hinh1() 
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << "*";
    cout << endl;
}

void Hinh2()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= 1 && i < (n - 1) && j >= 1 && j < (n - 1)) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}

void Hinh3()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= 1 && i < (n - 1) && j >= 1 && j < (n - 1)) cout << "#";
            else cout << "*";
        }
        cout << endl;
    }
}

void Hinh4()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= 1 && i < (n - 1) && j >= 1 && j < (n - 1))
                cout << " " << " ";
            else
                cout << i + 1 << " ";
        }
        cout << endl;
    }
}