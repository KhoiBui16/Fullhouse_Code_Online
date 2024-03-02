#include <bits/stdc++.h>
using namespace std;

bool IsBeautyNum(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        int cnt = 0;
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                n /= i;
            }
                if (cnt <= 1)
                    return false;
        }
    }
    if (n != 1)
        return false;
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (IsBeautyNum(i))
            cout << i << " ";
    }

    return 0;
}