#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}


int main()
{
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b - 1; i++)
        for (int j = i + 1; j <= b; j++)
            if (gcd(i, j) == 1)
                cout << "(" << i << "," << j << ")" << endl;

    return 0;
}