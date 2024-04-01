#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;
    getline(cin, str1); getline(cin, str2);
    if (str1.find(str2) != string::npos) cout << "YES";
    else cout << "NO";
    return 0;
}