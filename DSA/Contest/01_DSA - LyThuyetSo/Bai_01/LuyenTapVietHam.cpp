#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool IsPrime(int n) // 1
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

ll SumOfDigits(int n)   // 2
{
    ll sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

ll SumOfEvenDigits(ll n)    // 3
{
    ll sumEven = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
            sumEven += digit;
        n /= 10;
    }
    return sumEven;
}

ll SumOfPrimeNum(int n) // 4
{
    ll sumPrimeDigits = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            sumPrimeDigits += digit;
        n /= 10;
    }
    return sumPrimeDigits;
}

ll PalindromeNum(int n) // 5
{
    int temp = n;
    int rev = 0;
    while (temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev;
}

int CountOfDifferPrimeDivisors(int n)    // 6
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cnt++;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n != 1)
        cnt++;
    return cnt;
}

int MaxPrimeDivisor(int n)  // 7
{
    int max = 2;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i > max)
                max = i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n != 1)
    {
        if (n > max)
            max = n;
    }
    return max;
}

bool ContainnsDigit6(int n)   // 8
{
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 6)
            return true;
        n /= 10;  
    }
    return false;
}

bool IsSumOfDigitsDivisbleBy8(int n)    // 9
{
    long sum = SumOfDigits(n);
    return (sum % 8 == 0);
}

ll Factorial(int n) 
{
    if (n == 0 || n == 1)
        return 1;
    return n * Factorial(n - 1);
}

ll SumOfFactorialOfDigits(int n)    // 10
{
    ll sum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sum += Factorial(digit);
        n/= 10;
    }
    return sum;
}

bool IsSameDigits(int n)    // 11
{
    int CheckDigit = n % 10;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit != CheckDigit)
            return false;
        n /= 10;
    }
    return true;
}

bool IsLastMaxDigits(int n)
{
    int LastDigit = n % 10;
    while (n != 0)
    {
        int digit = n % 10;
        if (digit > LastDigit)
            return false;
        n /= 10;
    }
    return true;
}

int CountDigits(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

ll SumOfDigitExponentiationWithBase(int n) // 13
{
    ll sum = 0;
    int cnt = CountDigits(n);
    while (n != 0)
    {
        int digit = n % 10;
        sum += pow(digit, cnt);
        n /= 10;
    }

    return sum;
}

int main()
{
    int n;
    cin >> n;

    // 1
    if (IsPrime(n))
        cout << 1 << endl;
    else
        cout << 0 << endl;

    // 2
    cout << SumOfDigits(n) << endl;

    // 3
    cout << SumOfEvenDigits(n) << endl;

    // 4
    cout << SumOfPrimeNum(n) << endl;

    // 5
    cout << PalindromeNum(n) << endl;

    // 6
    cout << CountOfDifferPrimeDivisors(n) << endl;

    // 7
    cout << MaxPrimeDivisor(n) << endl;

    // 8
    if (ContainnsDigit6(n))
        cout << 1 << endl;
    else 
        cout << 0 << endl;
    
    // 9
    if (IsSumOfDigitsDivisbleBy8(n))
        cout << 1 << endl;
    else
        cout << 0 << endl;

    // 10
    cout << SumOfFactorialOfDigits(n) << endl;

    // 11
    if (IsSameDigits(n))
        cout << 1 << endl;
    else
        cout << 0 << endl;

    // 12
    if (IsLastMaxDigits(n))
        cout << 1 << endl;
    else
        cout << 0 << endl;

    // 13
    cout << SumOfDigitExponentiationWithBase(n);
    return 0;
}