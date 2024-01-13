/*
	C++ Buổi 03_Bài 17.Vẽ Hình 5.
    Cho số nguyên dương N là số lẻ, in ra hình số tương ứng
	Dòng duy nhất chứa số nguyên dương N(5 ≤ x,y ≤ 30).
	Dữ liệu vào:
	7
	Dữ liệu ra:

	1           1
	  2       2
	    3   3
	     4
	   5   5
     6       6
    7          7
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) 
        {
            if (j == i || j == n - i + 1)
                cout << i << " ";
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}