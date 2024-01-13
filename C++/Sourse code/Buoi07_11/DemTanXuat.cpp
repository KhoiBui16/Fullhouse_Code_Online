/*
	C++ Buổi 07_Bài 11.Đếm tần suất.
	Cho mảng các số nguyên không âm gồm n phần tử, thực hiện đếm tần suất xuất hiện của các phần tử và in theo mẫu.
	
	Input Format
	Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.(2≤n≤10^6; 0≤ai≤10^7)
	Output Format
	In ra tần suất xuất hiện của các phần tử theo thứ tự từ nhỏ tới lớn sau đó bỏ trống 1 dòng và 
	in ra tần suất xuất hiện của các phần tử theo thứ tự xuất hiện trong mảng(mỗi giá trị chỉ liệt kê 1 lần).

	Dữ liệu vào:
	6
	1 3 4 2 3 4
	Dữ liệu ra:
	1 1
	2 1
	3 2
	4 2

	1 1
	3 2
	4 2
	2 1
*/


#include <iostream>
#define MAX_VAL 10000000

using namespace std;

void countFrequency(int* arr, int n) {
	int freq[MAX_VAL + 1] = { 0 };
	bool printed[MAX_VAL + 1] = { false };
	// tao mang tan suat va dem so lan xuat hien cua tung phan tu trong mang
	for (int i = 0; i < n; i++)
		freq[arr[i]]++;
	// in ra tan suat xuat hien cua cac phan tu theo thu tu
	for (int i = 0; i <= MAX_VAL; i++)
		if (freq[i] > 0)
			cout << i << " " << freq[i] << endl;
	cout << endl;
	// in ra tan suat xat hien cua cac phan tu theo thu tu xuat hien trong mang
	for (int i = 0; i < n; i++)
	{
		if (!printed[arr[i]])
		{
			cout << arr[i] << " " << freq[arr[i]] << endl;
			printed[arr[i]] = true;
		}
	}
}

int main() {
	int n;
	cin >> n;
	int arr[10000];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	countFrequency(arr, n);
	return 0;
}

/*
	Cách 2: Dễ hiểu hơn
#include <iostream>
#include <cmath>

using namespace std;

int cnt[10000001]; // khai bao o global de khong bi tran stack => gia tri ban dau cua cnt[i] = 0

void NhapMang(int[], int&);
void TanSuat(int[], int);

int main()
{
	int n;
	int a[10000];
	cin >> n;
	NhapMang(a, n);
	TanSuat(a, n);

	return 0;
}

void NhapMang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		// sap xep khac gia tri trong mang a[i] tro thanh index de tang cnt[a[i]] len
		cnt[a[i]]++;
	}
}

void TanSuat(int a[], int n)
{
	// in ra theo thu tu cac gia tri trong mang a[i] va so lan xuat hien cua no
	for (int i = 0; i <= 10000000; i++)
	{
		// kiem tra xem neu mang cnt[i] khac 0 thi in ra => gia tri trong mang a[i] co xuat hien
		if (cnt[i] != 0)
			// i la gia tri trong mang a[i] && cnt[i] la so lan xuat hien cua no
			cout << i << " " << cnt[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		// kiem tra xem neu mang cnt[a[i]] khac 0 thi in ra => gia tri trong mang a[i] co xuat hien
		if (cnt[a[i]] != 0)
		{
			// a[i] la gia tri trong mang a[i] && cnt[a[i]] la so lan xuat hien cua no
			cout << a[i] << " " << cnt[a[i]] << endl;
			// gan lai gia tri cnt[a[i]] = 0 de khong bi in ra nhieu lan => gia tri chi xuat hien 1 lan trong mang
			// in phan tu a[i] xong roi cap nhat gia tri ve 0 lien tuc => khong in ra nua
			cnt[a[i]] = 0;
		}
	}
}
*/