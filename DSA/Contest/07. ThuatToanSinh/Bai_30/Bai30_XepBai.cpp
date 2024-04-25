#include <bits/stdc++.h>
using namespace std;

int n, a[1001], ok;

void Init()
{
    for (int i = 1; i <= n; i++)
        a[i] = i;
}

void generate() // sinh hoan vi : co the dung ham next_permutation trong thu vien algorithm
{
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1])
        --i;
    if (i == 0)
        ok = 0;
    else
    {
        int j = n;
        while (a[i] > a[j])
            --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

void print()
{
    for (int i = 1; i <= n; i++)
        cout << a[i];
    cout << endl;
}

bool check() // check dieu kien de bai
{
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ok = 1;
        Init();
        while (ok)
        {
            if (check() == true)
                print();
            generate();
        }
    }
    return 0;
}