/*
    C++ Buổi 11_Bài 06.Hoán vị đường chéo.
    Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. 
    Hãy hoán vị các phần tử trên 2 đường chéo chính và phụ của ma trận.

    Input Format
    Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số. 
    (1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9)

    Output Format
    In ra ma trận sau khi hoán vị 2 đường chéo.

    Dữ liệu vào:
    5
    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    21 22 23 24 25

    Dữ liệu ra:
    5 2 3 4 1
    6 9 8 7 10
    11 12 13 14 15
    16 19 18 17 20
    25 22 23 24 21
*/

#include <iostream>
using namespace std;

long a[200][200]; // khai báo global để tránh stack overflow
void HoanViDuongCheo(long[][200], int);

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    HoanViDuongCheo(a, n);
    return 0;
}

void HoanViDuongCheo(long a[][200], int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            swap(a[i][i], a[i][n - i - 1]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}