/*
	C++ Buổi 11_Bài 03.Số lớn nhất và nhỏ nhất trong ma trận.
	Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tìm số nhỏ nhất trong ma trận và số lớn nhất trong ma trận, 
	sau đó liệt kê các vị trí xuất hiện của các phần tử này trong ma trận.

	Input Format
	Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số. (1≤n,m≤100; 
	Các phần tử trong ma trận là số dương không quá 10^9)

	Output Format
	Dòng đầu tiên in ra số nhỏ nhất trong ma trận, 
	các dòng tiếp theo liệt kê các vị trí của số này trong ma trận. 
	Dòng tiếp theo in ra số lớn nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma trận. 
	Xem test case mẫu để rõ hơn.

	Dữ liệu vào:
	3 3
	1 2 1
	4 5 6
	7 8 9
	Dữ liệu ra:
	1
	1 1
	1 3
	9
	3 3
*/

# include <iostream>
# define MAX 200

using namespace std;

void EnterArr(long[][MAX], int&, int&);
void ExportOutput(long[][MAX], int, int);

int main()
{
    int n, m;
    cin >> n >> m;
    long a[MAX][MAX];
    EnterArr(a, n, m);
    ExportOutput(a, n, m);

    return 0;
}

void EnterArr(long a[][MAX], int& n, int& m)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
}


void ExportOutput(long a[][MAX], int n, int m)
{
    long max = -1e9;
    long min = 1e9;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }
    cout << min << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == min)
                cout << i + 1 << " " << j + 1 << endl;
    cout << max << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (a[i][j] == max)
                cout << i + 1 << " " << j + 1 << endl;
}
