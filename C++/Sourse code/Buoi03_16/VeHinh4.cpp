/*
	C++ Buổi 03_Bài 16.Vẽ Hình 4.
    Nhập N và in ra hình vẽ tam giác cân tương ứng
	Dòng duy nhất chứa số nguyên dương N(1 ≤ n ≤ 30).

	Dữ liệu vào:
	5
	Dữ liệu ra:
	* * * * * * * * *
	  * * * * * * *
		* * * * *
		  * * *
			*
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n; cin >> n;
    for (int i = n; i >= 1; i--) 
    {
        //Khoảnng trống
        for (int j = 1; j <= (n - i) * 2; j++)
            cout << " ";
        //Dấu *
        for (int j = 1; j <= i * 2 - 1; j++) 
            cout << "* ";
        cout << endl;
    }
    return 0;
}