#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str; cin >> str; str += 'a';
    long long sum = 0;
    string tmp = "0";
    for (int i = 0; i < str.size(); i++)
    if (isdigit(str[i])) tmp += str[i];
    else
    {
        sum += stoll(tmp);
        tmp = "0";
    }
    cout << sum;
    return 0;
}