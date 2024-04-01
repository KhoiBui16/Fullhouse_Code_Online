#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string tmp = str.substr(0, 1);
    string max = "";
    for (vector<string>::size_type i = 1; i < str.size(); i++)
    {
        if (str[i] == str[i - 1])
        {
            if (tmp.size() > max.size() || (tmp.size() == max.size() && tmp > max))
                max = tmp;
            tmp = str[i];
        }
        else tmp += str[i];
    }
    
    if (tmp.size() > max.size() || (tmp.size() == max.size() && tmp > max))
        max = tmp;
    cout << max;
    return 0;
}