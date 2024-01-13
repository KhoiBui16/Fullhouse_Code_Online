/*
	C++ Buổi 09_Bài 05.Sắp xếp đếm phân phối.(Counting sort)
	Cho mảng số nguyên A[] có N phần tử, hãy in mảng tăng dần sau khi dùng thuật toán sắp xếp đếm phân phối.

	Input Format
	Dòng đầu tiên là số nguyên dương N. 
	Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.(1<=N<=10^4; 0<=A[i]<=10^5)

	Output Format
	In ra các bước của thuật toán sắp xếp đếm phân phối.

	Dữ liệu vào:
	5
	41 18 64 20 9
	Dữ liệu ra:
	9 18 20 41 64
*/

/*
	How does Counting Sort Algorithm work ?
	Step1 :
		Find out the maximum element from the given array.

	Step 2:
		Initialize a countArray[] of length max+1 with all elements as 0.
		This array will be used for storing the occurrences of the elements of the input array.

	Step 3:
		In the countArray[], store the count of each unique element of the input array at their respective indices.
		For Example : The count of element 2 in the input array is 2. So, store 2 at index 2 in the countArray[].
		Similarly, the count of element 5 in the input array is 1, hence store 1 at index 5 in the countArray[].

	Step 4:
		Store the cumulative sum or prefix sum of the elements of the countArray[] by doing countArray[i] = countArray[i – 1] + countArray[i].
		This will help in placing the elements of the input array at the correct index in the output array.

	Step 5:

		Iterate from end of the input array and because traversing input array from end preserves the order of equal elements, which eventually makes this sorting algorithm stable.
		Update outputArray[ countArray[ inputArray[i] ] – 1] = inputArray[i].
		Also, update countArray[ inputArray[i] ] = countArray[ inputArray[i] ]– -.

	Step 6:
		For i = 6,
		Update outputArray[ countArray[ inputArray[6] ] – 1] = inputArray[6]
		Also, update countArray[ inputArray[6] ] = countArray[ inputArray[6] ]- –

	Step 7:
		For i = 5,
		Update outputArray[ countArray[ inputArray[5] ] – 1] = inputArray[5]
		Also, update countArray[ inputArray[5] ] = countArray[ inputArray[5] ]- –

	Step 8:
		For i = 4,
		Update outputArray[ countArray[ inputArray[4] ] – 1] = inputArray[4]
		Also, update countArray[ inputArray[4] ] = countArray[ inputArray[4] ]- –

	Step 9:
		For i = 3,
		Update outputArray[ countArray[ inputArray[3] ] – 1] = inputArray[3]
		Also, update countArray[ inputArray[3] ] = countArray[ inputArray[3] ]- –

	Step 10:
		For i = 2,
		Update outputArray[ countArray[ inputArray[2] ] – 1] = inputArray[2]
		Also, update countArray[ inputArray[2] ] = countArray[ inputArray[2] ]- –

	Step 11:
		 For i = 1,
		Update outputArray[ countArray[ inputArray[1] ] – 1] = inputArray[1]
		Also, update countArray[ inputArray[1] ] = countArray[ inputArray[1] ]- –

	Step 12:
		For i = 0,
		Update outputArray[ countArray[ inputArray[0] ] – 1] = inputArray[0]
		Also, update countArray[ inputArray[0] ] = countArray[ inputArray[0] ]- –
*/

#include <iostream>
using namespace std;

void CountingSort(int[], int);
int max(int, int);

int cnt[10000001];

int main()
{
	int n;
	cin >> n;
	int a[100000];
	CountingSort(a, n);
	return 0;
}

int max(int a, int b)
{
	return a > b ? a : b;
}

void CountingSort(int a[], int n)
{
	int m = INT_MIN;
	// Nhap cac phan tu (element) trong mang
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		cnt[a[i]]++;
		m = max(m, a[i]);
	}

	for (int i = 0; i <= m; i++)
	{
		if (cnt[i] != 0)
		{
			for (int j = 0; j < cnt[i]; j++)
				cout << i << " ";
		}
	}
}
