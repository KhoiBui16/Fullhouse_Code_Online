/*
    C++ Buổi 07_Bài 05.Kiểm tra mảng tăng dần.
    Kiểm tra xem mảng đã cho có tăng chặt hay không, tức là các phần tử đứng sau luôn lớn hơn phần tử đứng trước nó.

    Input Format
    Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng. (1≤n≤10^6; 1≤ai≤10^9)
    Output Format
    In YES nếu các phần tử trong mảng tăng dần, ngược lại in NO

    Dữ liệu vào:
    6
    1 2 4 5 7 9
    Dữ liệu ra:
    YES
*/

#include <iostream>

using namespace std;

void EnterInput(long[], int&);
bool GrowArr(long[], int);

int main()
{
    int n;
    cin >> n;
    long a[1000];
    EnterInput(a, n);
    if (GrowArr(a, n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

void EnterInput(long a[], int& n)
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

bool GrowArr(long a[], int n)
{
    bool A_Tang_Chat = true;
    for (int i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
            A_Tang_Chat = false;
    }
    return A_Tang_Chat;
}