/*
	C++ Buổi 11_Bài 07.Hoán Vị 2 Hàng Của Ma Trận.
	Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. 
	Hãy hoán vị các phần tử trên 2 hàng của ma trận.

	Input Format
	Dòng đầu tiên là số N. 
	N dòng tiếp theo mỗi dòng có N số. Dòng tiếp theo là 2 hàng u, v cần hoán vị. 
	(1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9; 1≤u,v≤200)

	Output Format
	In ra ma trận sau khi hoán vị 2 hàng.

	Dữ liệu vào:
	5
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
	1 5

	Dữ liệu ra:
	21 22 23 24 25
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	1 2 3 4 5
*/
	// Cách 1: Xài mảng tĩnh
#include <iostream>
using namespace std;

void NhapMaTran(long[][200], int&);
void HoanVi2Hang(long[][200], int, int, int);

int main()
{
	int n;
	cin >> n;
	long a[200][200];
	NhapMaTran(a, n);
	int u, v;
	cin >> u >> v;
	HoanVi2Hang(a, n, u, v);
	return 0;
}

void NhapMaTran(long a[][200], int& n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
}


void HoanVi2Hang(long a[][200], int n, int r1, int r2)
{
	for (int j = 0; j < n; j++)
		swap(a[r1 - 1][j], a[r2 - 1][j]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

	// Cách 2 xài mảng động
/*
	#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Đọc ma trận NxN
    vector<vector<int>> matrix(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    int u, v;
    cin >> u >> v; // Đọc hai hàng u, v cần hoán vị

    // Hoán vị hai hàng u và v trong ma trận
    swap(matrix[u - 1], matrix[v - 1]);

    // In ra ma trận sau khi hoán vị
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
*/