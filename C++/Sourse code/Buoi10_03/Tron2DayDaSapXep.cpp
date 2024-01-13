/*
	C++ Buổi 10_Bài 03.Trộn 2 dãy đã sắp xếp.
	Cho 2 mảng đã được sắp xếp tăng dần, thực hiện trộn 2 dãy trên thành một dãy được sắp xếp.Độ phức tạp mong muốn O(n+m)

	Input Format
	Dòng đầu tiên là số lượng phần tử của 2 dãy n và m 
	Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3 là m phần tử trong dãy thứ 2. (1≤n,m≤10^7; 1≤ai≤10^9)

	Output Format
	In ra mảng sau khi trộn.

	Dữ liệu vào:
	10 5
	41 6334 11478 15724 18467 19169 24464 26500 26962 29358
	41 6334 18467 19169 26500
	Dữ liệu ra:
	41 41 6334 6334 11478 15724 18467 18467 19169 19169 24464 26500 26500 26962 29358
*/

#include <iostream>
#include <vector>
using namespace std;

	// cách 1: dùng vector mà sử dụng trong hàm main
int main()
{
	int n, m;
	cin >> n >> m;
	int a[1000], b[1000];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int j = 0; j < m; j++)
		cin >> b[j];
	int i = 0, j = 0;
	// nếu không xái vector thì phải có h = 0, hop[500 + 500]
	// Tạo 1 vector
	vector<int> hop;
	while (i < n && j < m)
	{
		if (a[i] <= b[j])
		{
			hop.push_back(a[i]);
			i++;
		}
		else
		{
			hop.push_back(b[j]);
			j++;
		}
	}
	// kiểm tra xem 1 trong 2 mảng còn phần tử nào thì xếp vào mảng đang sắp xếp
	while (i < n)
	{
		hop.push_back(a[i]);
		i++;
	}
	while (j < m)
	{
		hop.push_back(b[j]);
		j++;
	}
	// auto sẽ tự động chọn kiểu dữ liệu phụ hợp với array
	for (int x : hop)
		cout << x << " ";
	return 0;
}

/*	CÁCH 2: DÙNG MẢNG
#include <iostream>

using namespace std;

void NhapMang(int[], int&);
void Tron2MangSapXep(int[], int[], int, int);

int main()
{
	int n, m;
	cin >> n >> m;
	int a[1000], b[1000];
	NhapMang(a, n);
	NhapMang(b, m);
	Tron2MangSapXep(a, b, n, m);
	return 0;
}

void NhapMang(int k[], int& l)
{
	for (int i = 0; i < l; i++)
		cin >> k[i];
}

void Tron2MangSapXep(int a[], int b[], int n, int m)
{
	int hop[1000 + 1000], i = 0, j = 0, h = 0;
	// điều kiện lặp là tới khi 1 trong hai hàm hết phần tử
	while (i < n && j < m)
	{
		if (a[i] < b[j])
		{
			hop[h] = a[i];
			h++, i++;
			// có thể thay thế code gọn hơn bằng cách sau
			// hop[h++] = a[i++]
		}
		else
		{
			hop[h] = b[j];
			h++, j++;
			// có thể thay thế code gọn hơn bằng cách sau
		// hop[h++] = b[j++]
		}
	}
	// khi tới đây kiểm tra xem phần từ của mảng nào còn thì sắp xếp vô mảng
	// nếu mảng a còn thì vòng lặp while 1 này sẽ chạy
	while (i < n)
	{
		hop[h++] = a[i++];
	}
	// nếu mảng v còn thì vòng lặp while 2 sẽ chạy
	while (j < m)
	{
		hop[h++] = b[j++];
	}
    for (int i = 0; i < h; i++)
        cout << hop[i] << " ";
}
*/