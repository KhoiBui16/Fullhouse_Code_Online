/*
    C++ Buổi 13_Bài 01.Kiểm tra sô thuần sô nguyên tố.(Dùng sàng)
    Một số được coi là thuần nguyên tố nếu nó là số nguyên tố, tất cả các chữ số là nguyên tố và tổng chữ số của nó cũng là một số nguyên tố. Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số thuần nguyên tố.

    Dữ liệu vào:
    Nhập 2 số nguyên dương.(1 ≤ a,b ≤ 10^6).

    Dữ liệu ra:
    In ra kết quả của bài toán.

    Ví dụ:
    Dữ liệu vào:
    1 10
    Dữ liệu ra:
    4
*/

#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

bool checkPrimeDigitsAndSum(int n)
{
    int temp = n;
    int sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit != 2 && digit != 3 && digit != 5 && digit != 7)
            return false;
        sum += digit;
        n /= 10;
    }
    return isPrime(temp) && isPrime(sum);
}

int  main()
{
    int a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = a; i <= b; i++)
        if (checkPrimeDigitsAndSum(i))
            cnt++;
    cout << cnt;
}