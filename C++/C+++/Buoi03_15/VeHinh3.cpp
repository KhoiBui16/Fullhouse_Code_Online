/*
	C++ Buổi 03_Bài 15.Vẽ Hình 3.
    Nhập N và in ra hình vẽ tam giác cân tương ứng
	Dòng duy nhất chứa số nguyên dương N.(1 ≤ x,y ≤ 30).

	Dữ liệu vào:
	5
	Dữ liệu ra:
			*
		  * * *
		* * * * *
	  * * * * * * *
	* * * * * * * * *
*/

#include <iostream>
#include <cmath>

using namespace std;

// Một dòng có n*2-1 vị trí

int main() {
    long long n; cin >> n;
    for (int i = 1; i <= n; i++) 
    {
        //In dấu " ";
        for (int j = 1; j <= (n * 2 - 1) - (2 * i - 1); j++) 
            cout << " ";
        //In dấu *
        for (int j = 1; j <= 2 * i - 1; j++) 
            cout << "* ";
        cout << endl;
    }
    return 0;
}