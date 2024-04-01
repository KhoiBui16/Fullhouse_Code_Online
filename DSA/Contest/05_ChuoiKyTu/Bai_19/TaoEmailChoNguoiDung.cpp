#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    getline(cin, name);
    for (char& c : name)
        c = tolower(c);
    string tmp = "";
    string address = "@gmail.com";
    string email = "";
    vector<string> fullname;

    stringstream ss(name);
    string word;
    while (ss >> word) fullname.push_back(word);

    for (int i = 0; i < fullname.size() - 1; i++)
    {
        tmp += fullname[i][0];
    }

    tmp.insert(0, fullname[fullname.size() - 1]);
    email = (tmp + address);
    cout << email;
    return 0;
}