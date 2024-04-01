#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    sort(str.begin(), str.end(), greater<int>());
    for (char x : str) cout << x;
    cout << '\n';
    sort(str.begin(), str.end());
    for (char x : str) cout << x;
    return 0;
}