#include <bits/stdc++.h>
using namespace std;

int n, a[1001], ok;

    // cau hinh AB ket hop voi cau hinh chinh hop lap

void Init()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 1;
    }
}

void generate() // thuat toan sinh chinh hop lap
{
    int i = n;
    while (i >= 1 && a[i] == n)
    {
        i--;
    }
    if (i == 0)
        ok = 0;
    else
    {
        // neu chua max thi tang len 1 don vi
        a[i]++;
        // nhung phan tu phia sau deu giu la 1
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = 1;
        }
    }
}

void in()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << endl;
}

int main()
{
    cin >> n;
    Init();
    ok = 1;
    while (ok)
    {
        in();
        generate();
    }
    return 0;
}
