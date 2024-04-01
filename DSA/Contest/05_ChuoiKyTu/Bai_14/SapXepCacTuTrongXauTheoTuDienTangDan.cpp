#include <iostream>
#include <string>
#include <sstream>
#include <set>
using namespace std;

int main()
{   
    string str;
    getline(cin, str);
    set<string> se;
    string word = "";
    stringstream ss(str);
    while(ss >> word) se.insert(word);
    for (string it : se)
        cout << it << ' ';
    return 0;
}