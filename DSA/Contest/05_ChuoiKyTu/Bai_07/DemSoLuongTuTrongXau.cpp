#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int cnt = 0;
    string word;
    stringstream ss(str);
    while (ss >> word) cnt++;
    cout << cnt;
    return 0;
}