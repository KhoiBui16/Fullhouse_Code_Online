#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

void convertName(string& name)
{
    // for (int i = 0; i < name.size(); i++)
    //     name[i] = tolower(name[i]);
    for (char& it : name)
        it = tolower(it);
    name[0] = toupper(name[0]);
}

void convertFullName(string name, vector<string>& fullname)
{
    stringstream ss(name);
    string word;
    while(ss >> word)
    {
        convertName(word);
        fullname.push_back(word);
    }
}

void printName(vector<string> name)
{
    for (string it : name)
        cout << it << " ";
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string name;
        getline(cin, name);
        vector<string> fullname;
        convertFullName(name, fullname);
        printName(fullname);
        cout << endl;
    }
    return 0;
}