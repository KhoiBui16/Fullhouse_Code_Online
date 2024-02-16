/*
    C++ Buổi 13_Bài 08.Fibonacci(Basic).
    Nhập vào một số và kiểm tra xem số vừa nhập có phải là số trong dãy fibonacci hay không?

    Dữ liệu vào:
    Số nguyên không âm n.(0≤n≤9*10^18)

    Dữ liệu ra:
    In ra YES nếu n là số Fibonacci, ngược lại in NO.

    Ví dụ:
    Dữ liệu vào:
    6
    Dữ liệu ra:
    NO
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isFibo(long long n)
{
    long long f1 = 0, f2 = 1, fn;
    if(n == 0 || n == 1)
    return true;
    for (int i = 2; i < 93; i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
        if (fn == n)
        return true;
    }
    return false;
}

int main()
{
    long long n;
    cin >> n;
    cout << ((isFibo(n)) ? "YES" : "NO");
    return 0;
}