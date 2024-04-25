#include <bits/stdc++.h>

using namespace std;

char c;
int n;
bool ok;
string s;

void sinh()
{
    int i = s.size() - 1;
    while (i >= 0 && s[i] == c)
        i--;
    if (i == -1)
        ok = 0;
    else
    {
        s[i]++;
        for (int j = i + 1; j < s.size(); j++)
            s[j] = s[j - 1];
    }
}

int main()
{
    cin >> c >> n;
    s = string(n, 'A');
    ok = 1;
    while (ok)
    {
        cout << s << endl;
        sinh();
    }
}