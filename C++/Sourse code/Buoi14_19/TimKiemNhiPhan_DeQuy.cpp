/*
	C++ Buổi 14_Bài 19.Tìm kiếm nhị phân(Đệ Quy).
	Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. 
	Có T truy vấn, mỗi truy vấn yêu cầu bạn kiểm tra xem phần tử X có xuất hiện trong mảng hay không?

	Dữ liệu vào:
	Dòng đầu tiên là số nguyên dương N. 
	Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách. Dòng thứ 3 là số lượng truy vấn T. 
	T dòng tiếp theo mỗi dòng là một số nguyên dương X. 
	(1<=N<=10^6; 1<=T<=10^3; 0<=A[i],X<=10^9)

	Dữ liệu ra:
	Đối với truy vấn in ra YES trên 1 dòng nếu X xuất hiện trong mảng, 
	ngược lại in ra NO.

	Dữ liệu vào:
	6
	1 2 3 4 5 6
	3
	1
	6
	7
	Dữ liệu ra:
	YES
	YES
	NO
*/
    // Cách 1: Xài vector
#include <iostream>
#include <vector>

using namespace std;

bool binarySearchRecursive(const vector<int>&, int, int, int);

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int T;
    cin >> T;

    while (T--) 
    {
        int X;
        cin >> X;

        if (binarySearchRecursive(A, 0, N - 1, X)) 
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

bool binarySearchRecursive(const vector<int>& arr, int low, int high, int x)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // Nếu phần tử ở giữa là phần tử cần tìm
        if (arr[mid] == x)
            return true;

        // Nếu phần tử cần tìm nằm ở bên trái phần tử giữa
        if (arr[mid] > x)
            return binarySearchRecursive(arr, low, mid - 1, x);

        // Nếu phần tử cần tìm nằm ở bên phải phần tử giữa
        return binarySearchRecursive(arr, mid + 1, high, x);
    }

    // Phần tử không xuất hiện trong mảng
    return false;
}

    // Cách 2: Xài mảng thông thường
/*
    #include <iostream>
#include <algorithm>
using namespace std;

bool BinSearch(int[], int, int, int);

int main()
{
	int n;
	cin >> n;
	int a[n];
	// Nhập phần tử trong mảng
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int T;
	cin >> T;
	while (T--)
	{
	    int x;
		cin >> x;
		if (BinSearch(a, 0, n - 1, x))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

bool BinSearch(int a[], int Left, int Right, int x)
{
	while (Left <= Right)
	{
		int Mid = (Left + Right) / 2;
		if (a[Mid] == x)
			return true;
		else if (a[Mid] < x)
			return BinSearch(a, Mid + 1, Right, x);
		else
			return BinSearch(a, Left, Mid - 1, x);
	}
	return false;	
}
*/