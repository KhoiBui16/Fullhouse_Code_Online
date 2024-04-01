#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int alpha = 0, digit = 0, special = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i])) alpha++;
        else if (isdigit(str[i])) digit++;
        else special++;
    }
    cout << alpha << " " << digit << " " << special;
    return 0;
}