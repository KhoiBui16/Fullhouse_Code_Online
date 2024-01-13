/*
    C++ Buổi 11_Bài 02.Tổng hàng, tổng cột trên ma trận.
    Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. 
    Hãy tính tổng các phần tử trên từng hàng và tổng các phần tử trên từng cột của ma trận.

    Input Format
    Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số. (1≤n,m≤200; Các phần tử trong ma trận là số dương không quá 10^9)

    Output Format
    Dòng đầu tiên, in ra N số là tổng của N hàng. Dòng thứ 2 in ra M số là tổng của M cột.

    Dữ liệu vào:
    3 4
    1 3 55 31
    4 5 7 11
    19 6 88 70

    Dữ liệu ra:
    90 27 183
    24 14 150 112
*/

# include <iostream>
# define MAX 300
# define l long 

using namespace std;

void EnterArray(l a[][MAX], int& n, int& m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}

l SumRow(l a[][MAX], int n, int m, int r)
{
    l s = 0;
    for (int j = 0; j < m; j++)
        s += a[r][j];
    return s;

}

l SumCol(l a[][MAX], int n, int m, int c)
{
    l s = 0;
    for (int i = 0; i < n; i++)
        s += a[i][c];
    return s;
}

void ExportOutput(l a[][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
        cout << SumRow(a, n, m, i) << " ";
    cout << endl;
    for (int j = 0; j < m; j++)
        cout << SumCol(a, n, m, j) << " ";
}

int main()
{
    int n, m;
    cin >> n >> m;
    l a[MAX][MAX];
    EnterArray(a, n, m);
    ExportOutput(a, n, m);

    return 0;
}