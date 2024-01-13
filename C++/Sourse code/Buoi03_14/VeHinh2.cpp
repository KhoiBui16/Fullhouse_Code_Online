/*
	C++ Buổi 03_Bài 14.Vẽ hình 2.
    Nhập n là một số nguyên không quá 100. 
	In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.
	Số nguyên dương N.(1≤n≤100).
	In ra hình sao theo mẫu

	Dữ liệu vào:
	5
	Dữ liệu ra:

	*
	**
	***
	****
	*****

	*****
	****
	***
	**
	*

		*
	   **
	  ***
	 ****
	*****

	*****
	 ****
	  ***
	   **
		*

	*
	**
	* *
	*  *
	*****
*/

#include <iostream>

using namespace std;
short int n;

void Hinh1()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
}

void Hinh2()
{
    for (int i = 1; i <= n; i++)
        for (int j = n; j >= i; j--)
            cout << "*";
        cout << endl;
}

void Hinh3()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= 1 && j <= (n - i)) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}

void Hinh4()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j < i) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}

void Hinh5()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j > 1 && j < i && i != n) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}

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
    cout << endl;
    Hinh5();
    return 0;
}