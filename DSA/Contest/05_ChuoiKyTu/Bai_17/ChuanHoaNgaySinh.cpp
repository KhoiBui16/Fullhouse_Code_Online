#include <iostream>
#include <string>
using namespace std;

void convertBirth(string& date)
{
    if (date[1] == '/') date.insert(0, "0");
    if (date[4] == '/') date.insert(3, "0");
}

int main()
{
    string str;
    cin >> str;
    convertBirth(str);
    cout << str;
    return 0;
}