#include <bits/stdc++.h>
using namespace std;

int ok;
char c;
string s;
    //  lam chua ra
void Init()
{
    for (int i = 65; i <= c; i++)
        s += i;
}

void generate()
{
    int i = s.size() - 2;
    while (i >= 0 && s[i] > s[i + 1])
    {
        i--;
    }
    if (i == -1)
        ok = 0;
    else
    {
        int j = s.size() - 1;
        while (s[i] > s[j])
            --j;
        swap(s[i], s[j]);
        reverse(s.begin(), s.end() + 1);
    }
}

void print()
{
    for (char x : s)
        cout << x;
    cout << endl;
}

int main()
{
    cin >> c;
    Init();
    ok = 1;
    while (ok)
    {
        print();
        generate();
    }
    cout << s;
    return 0;
}