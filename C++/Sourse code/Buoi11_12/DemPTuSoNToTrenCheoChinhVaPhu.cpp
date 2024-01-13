/*
    C++ Buổi 11_Bài 12.Đếm các phần tử là số nguyên tố trên đường chéo chính và phụ.
    Cho ma trận vuông cỡ nxn gồm n hàng, mỗi hàng n cột. 
    Hãy đếm các số nguyên tố trên đường chéo chính và đường chéo phụ, 
    mỗi phần tử là số nguyên tố thỏa mãn chỉ đếm 1 lần.

    Input Format
    Dòng đầu tiên là số n. n dòng tiếp theo mỗi dòng có n số. 
    (1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9)

    Output Format
    In ra số lượng số nguyên tố trên đường chéo chính và phụ.

    Dữ liệu vào:
    5
    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14 15
    16 17 18 19 20
    1000000007 21 22 24 25
    Dữ liệu ra:
    6
*/

#include <iostream>

using namespace std;

bool isPrimeNun(long);
int SlSoNToCheoChinhVaCheoPhu(long[][200], int);

int main()
{
    int n;
    cin >> n;
    long a[200][200];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int sl = SlSoNToCheoChinhVaCheoPhu(a, n);
    cout << sl;
    return 0;
}

bool isPrimeNum(long n)
{
    if (n < 2)
        return false;
    for (long i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int SlSoNToCheoChinhVaCheoPhu(long a[][200], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (isPrimeNum(a[i][i]) == true)
            ++cnt;
    // đường chéo phụ: i + j = n - 1
    // => j = n - i - 1
    for (int i = 0; i < n; i++)
        if (isPrimeNum(a[i][n - i - 1]) == true)
            ++cnt;
    if (n % 2 != 0)
        if (isPrimeNum(a[n / 2 - 1][n / 2 - 1]) == true)
            return cnt - 1;
    return cnt;
}