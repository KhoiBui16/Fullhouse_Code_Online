/*
    C++ Buổi 10_Bài 21.In theo khuôn dạng.
    Cho mảng A[] gồm n số nguyên khác nhau. Hãy đưa ra các phần tử của mảng theo khuôn dạng lớn nhất, nhỏ nhất, lớn thứ hai, nhỏ thứ 2, … Ví dụ với A[] = {9, 7, 12, 8, 6, 5} ta đưa ra : 12, 5, 9, 6, 8, 7.

    Input Format
    Dòng đầu tiên là số phần tử của mảng n; dòng tiếp theo là n số A [i] của mảng A [];các số được viết cách nhau một vài khoảng trống.(1≤ n,a[i] ≤10^5).

    Output Format
    Đưa ra kết quả trên một dòng.

    Ví dụ:
    Dữ liệu vào:
    8
    1 6 9 4 3 7 8 2
    Dữ liệu ra:
    9 1 8 2 7 3 6 4

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }        
    
    sort(arr.begin(), arr.end()); // Sắp xếp tăng dần

    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[n - 1 - i] << " " << arr[i] << " ";
    }

    if (n % 2 == 1)
        cout << arr[n / 2];
    
    return 0;
}