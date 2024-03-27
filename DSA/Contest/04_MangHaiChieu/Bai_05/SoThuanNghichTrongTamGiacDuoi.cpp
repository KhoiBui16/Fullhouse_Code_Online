#include <iostream>
#define MAX 100
using namespace std;
void EnterArr(long a[][MAX], int& n)
{
    // enter your array
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
}

bool isReverse(long k)
{
    // check reversed numbers
    long rev = 0;
    long temp = k;
    while (k != 0)
    {
        rev = rev * 10 + k % 10;
        k /= 10;
    }
    return (rev == temp);
}

int CountRevNum(long a[][MAX], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            if (isReverse(a[i][j]))
                cnt++;
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    long a[MAX][MAX];
    EnterArr(a, n);
    cout << CountRevNum(a, n);
    return 0;
}

