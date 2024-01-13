
/*
    C++ Buổi 02_Bài 29.Số lớn nhất nhỏ nhất trong 4 số.
    Cho 4 số nguyên a, b, c, d. Hãy tìm số lớn nhất và nhỏ nhất trong 4 số này.
	Input Format:
	4 số a, b, c, d viết trên 1 dòng và cách nhau một dấu cách.(1 ≤ a,b,c,d ≤ 10^18).
	Output Format:
	In ra số lớn nhất và nhỏ nhất.

	Dữ liệu vào:
	123 456 789 987
	Dữ liệu ra:
	987 123
*/

// 2.29

#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];

    ll maxn = arr[0], minn = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > maxn) 
            maxn = arr[i];
        if (arr[i] < minn) 
            minn = arr[i];
    }

    cout << maxn << " " << minn;
    return 0;
}