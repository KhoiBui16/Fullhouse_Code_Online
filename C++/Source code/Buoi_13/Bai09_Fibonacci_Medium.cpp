/*
    C++ Buổi 13_Bài 09.Fibonacci(Medium)
    Cho dãy số Fibonacci với F[0] = 0, F[1] = 1, F[N] = F[N - 1] + F[N - 2].Có thể N rất lớn nên bạn hãy tìm số Fibonacci khi chia 10^9 + 7(Áp dụng đồng dư).

    Dữ liệu vào:
    Dòng 1 là số bộ test T(1 <= T <= 10000) T dòng tiếp theo mỗi dòng là 1 số nguyên không âm N(2 <= N <= 10^6)

    Dữ liệu ra:
    Mỗi 1 test in ra số Fibo tương ứng.

    Ví dụ:
    Dữ liệu vào:
    6
    0
    1
    3
    4
    5
    10
    Dữ liệu ra:
    0
    1
    2
    3
    5
    55

*/

#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

long long fibo[10000001];

void generateFibo()
{
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 10000001; i++)
        fibo[i] = (fibo[i - 1] % MOD + fibo[i - 2] % MOD) % MOD;
}

int main()
{
    generateFibo();
    int test;
    cin >> test;
    while (test--)
    {
        long long n;
        cin >> n;
        cout << fibo[n] << endl;
    }
    return 0;
}