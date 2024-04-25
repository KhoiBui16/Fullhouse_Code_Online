#include <bits/stdc++.h>

using namespace std;

int n;
vector<string> name(1001);
bool ok;

void sinh()
{
    int i = n - 1;
    while (i >= 1 && name[i] >= name[i + 1])
        i--;
    if (!i)
        ok = 0;
    else
    {
        int j = n;
        while (name[i] >= name[j])
            j--;
        swap(name[i], name[j]);
        sort(name.begin() + i + 1, name.begin() + n + 1);
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> name[i];
    ok = 1;
    sort(name.begin() + 1, name.begin() + n + 1);
    while (ok)
    {
        for (int i = 1; i <= n; i++)
            cout << name[i] << " ";
        cout << endl;
        sinh();
    }
}