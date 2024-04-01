#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = tolower(str[i]);
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << "";
    }

    return 0;
}