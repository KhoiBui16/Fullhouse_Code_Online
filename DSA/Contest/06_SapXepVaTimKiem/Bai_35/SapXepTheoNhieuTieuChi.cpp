#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp1(long a, long b)
{
    return abs(a) < abs(b);
}

bool cmp2(long a, long b)
{
    if (abs(a) != abs(b))
        return abs(a) < abs(b);
    else
        return a < b;
    
}

ll SumOfDigits(long n)
{
    ll sum = 0;
    while (abs(n) != 0)
    {
        if (abs(n) >= 10)
            sum += abs(n) % 10;
        else
            sum += n;
        n /= 10;
    }
    return sum;
}

bool cmp3(long a, long b)
{
    return SumOfDigits(a) < SumOfDigits(b);
}

bool cmp4(long a, long b)
{
    if (SumOfDigits(a) == SumOfDigits(b))
        return a > b;
    else
        return SumOfDigits(a) < SumOfDigits(b);
}

bool cmp5(long a, long b)
{
    return (a % 2 == 0) && (b % 2 != 0);
}

bool cmp6(long a, long b)
{
    if (a % 2 == 0 && b % 2 == 0)
        return a > b;
    else if (a % 2 != 0 && b % 2 != 0)
        return a < b;
    else 
        return (a % 2 == 0) && (b % 2 != 0);
}

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for (long& it : arr)
        cin >> it;
    
    sort(arr.begin(), arr.end(), cmp1);
    for (long it : arr)
        cout << it << " ";
    cout << endl;

    sort(arr.begin(), arr.end(), cmp2);
    for (long it : arr)
        cout << it << " ";
    cout << endl;

    sort(arr.begin(), arr.end(), cmp3);
    for (long it : arr)
        cout << it << " ";
    cout << endl;

    sort(arr.begin(), arr.end(), cmp4);
    for (long it : arr)
        cout << it << " ";
    cout << endl;

    sort(arr.begin(), arr.end(), cmp5);
    for (long it : arr)
        cout << it << " ";
    cout << endl;

    sort(arr.begin(), arr.end(), cmp6);
    for (long it : arr)
        cout << it << " ";
    return 0;
}