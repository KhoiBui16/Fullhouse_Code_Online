#include <bits/stdc++.h>
using namespace std;

int n;
string s;

void Sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1')
    {
        s[i] = '0';
        i--;
    }
    if (i == -1)
    {
        // truong hop cau hinh cuoi
        cout << s;
    }
    else
    {
        s[i] = '1';
        cout << s;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // nhap cau hinh hien tai
        cin >> s;
        Sinh();
        cout << endl;
    }
    return 0;
}