#include <bits/stdc++.h>
using namespace std;

bool IsBeautyNum(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int cnt = 1;
            while (n % i == 0)
            {
                cnt++;
                n /= i;
                if (cnt > 2)
                    return true;
            }
        }
    }
        
    return false;
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