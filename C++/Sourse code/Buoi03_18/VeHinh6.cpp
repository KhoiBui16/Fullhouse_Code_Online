/*
	C++ Buổi 03_Bài 18.Vẽ Hình 6.
    Cho N là số nguyên dương, in ra hình tương ứng.
	Dòng duy nhất chứa số nguyên dương N(4 ≤ N ≤ 30).
	Dữ liệu vào:
	7
	Dữ liệu ra:
	ABCDEFG
	bcdefgh
	CDEFGHI
	defghij
	EFGHIJK
	fghijkl
	GHIJKLM
*/

#include <iostream>

using namespace std;

int main()
{
    short int n;
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++)
    {
        tmp = i;
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0) 
                cout << (char)(j + 65 + tmp);
            else 
                cout << (char)(j + 97 + tmp);
        }
        cout << endl;
    }
    return 0;
}