#include <bits/stdc++.h>
using namespace std;

bool checkNum(string num)
{
    long long sum = 0;
    for (vector<string>::size_type i = 0; i < num.size(); i++)
        sum += (num[i] - '0');
    return (sum % 3 == 0);
}

int main()
{
    string str;
    cin >> str;
    if (checkNum(str))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}