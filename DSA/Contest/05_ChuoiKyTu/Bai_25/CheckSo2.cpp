#include <iostream>
#include <string>
using namespace std;

bool checkNum(string num)
{
    for (int i = 1; i < num.size(); i++)
    {
        if (num[i] < num[i - 1]) return false;
    }
    return true;
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