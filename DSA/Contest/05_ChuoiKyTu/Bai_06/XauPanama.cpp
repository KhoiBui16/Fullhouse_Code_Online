#include <iostream>
#include <set>
#include <string>
#include <cctype>
#define panamaSize  26
using namespace std;

bool isPanama(string str, set <char>& se)
{
    for (char x : str)
        if (isalpha(x)) se.insert(tolower(x));
    
    if (se.size() != panamaSize) return false;
    return true;
}

int main()
{
    string str;
    getline(cin, str);
    set<char> se;
    if (isPanama(str, se)) cout << "YES";
    else cout << "NO";

    return 0;
}