#include <bits/stdc++.h>
using namespace std;

int n, k, a[1001], ok;

void kTao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    // vi tri bat dau tu phan tu o vi tri k
    int i = k;
    while (i >= 1 && a[i] == (n - k + i))
    {
        // dieu kien lap nay de tim ra vi tri bit chua dat max co gia tri n - k + i
        i--;
    }
    // co 2 truong hop
    if (i == 0) // TH1
    {
        ok = 0; // cau hinh cuoi cung vi khi do gia tri max o moi bit i deu thoa max
    }
    else // TH2
    {
        // luc nay tang gia tri o bit i chua dat max len 1 don vi
        a[i]++;
        // gia tri o moi bit tu i + 1 se dc tang them 1 don vi so voi bit i va chay toi bit thu k
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ok = 1;
        kTao();
        while (ok)
        {
            // sinh ra cau hinh hien tai
            for (int i = 1; i <= k; i++)
                cout << a[i];
            cout << " ";
            sinh();
        }
        cout << endl;   
    }

    return 0;
}