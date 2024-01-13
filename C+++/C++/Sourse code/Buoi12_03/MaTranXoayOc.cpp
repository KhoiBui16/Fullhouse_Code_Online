/*
    C++ Buổi 12_Bài 03.Ma trận xoáy ốc.
    Xây dựng ma trận xoáy ốc cấp n.

    Input Format
    Số nguyên dương n là cấp của ma trận xoáy ốc cần xây dựng.(2≤N≤100)

    Output Format
    In ra ma trận xoáy ốc.

    Dữ liệu vào:
    4
    Dữ liệu ra:
    1 2 3 4
    12 13 14 5
    11 16 15 6
    10 9 8 7
*/

# include <iostream>
# define MAX 50

using namespace std;

//void EnterArr(long[][MAX], int&);
void MaTranXoayOc(long[][MAX], int);

int main()
{
    int n;
    cin >> n;
    long a[MAX][MAX];
    // EnterArr(a, n);
    MaTranXoayOc(a, n);

    return 0;
}

/*
void EnterArr(long a[][MAX], int& n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}
*/

void MaTranXoayOc(long a[][MAX], int n)
{
    int cnt = 1; // count the index in matrix
    int s_r = 0; // start_row
    int e_r = n - 1; // end_row
    int s_c = 0; // start_column
    int e_c = n - 1; // end_column

    while (cnt <= n * n)
    {
        for (int j = s_c; j <= e_c; j++)
            a[s_r][j] = cnt++;
        for (int i = s_r + 1; i <= e_r; i++)
            a[i][e_c] = cnt++;
        for (int j = e_c - 1; j >= s_c; j--)
            a[e_r][j] = cnt++;
        for (int i = e_r - 1; i > s_r; i--)
            a[i][s_c] = cnt++;
        s_c++, e_c--, e_r--, s_r++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}