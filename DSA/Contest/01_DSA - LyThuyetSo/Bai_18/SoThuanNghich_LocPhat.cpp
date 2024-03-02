#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(int n)
{
    int rev = 0;
    int temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    return (rev == n);
}

long long SumOfDigits(int n)
{
    long long sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool IsBeautyNum(int n)
{
    long long sumDigits = SumOfDigits(n);
    bool check = false;
    int temp = n;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 6)
        {
            check = true;
            break;
        }
        n /= 10;
    }
    int LastDigitOfSum = sumDigits % 10;
    return (LastDigitOfSum == 8 && check == true && IsPalindrome(temp)) ;
}

int main()
{
    int a, b;
    cin >> a >> b;

    bool check = false;
    for (int i = a; i <= b; i++)
    {
        if (IsBeautyNum(i))
        {
            cout << i << " ";
            check = true;
        }
    }
    if (check == false)
    {
        cout << -1;
    }
    return 0;
}