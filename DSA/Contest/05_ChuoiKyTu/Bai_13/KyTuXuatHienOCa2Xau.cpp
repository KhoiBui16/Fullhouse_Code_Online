#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    set<char> sameChars, allChars;
    for (char x : str1)
    {
        if (str2.find(x) != string::npos) sameChars.insert(x);
        allChars.insert(x);
    }

    for (char x: str2) allChars.insert(x);

    for (char x : sameChars) cout << x;
    cout << '\n';
    for (char x : allChars) cout << x;
    return 0;
}