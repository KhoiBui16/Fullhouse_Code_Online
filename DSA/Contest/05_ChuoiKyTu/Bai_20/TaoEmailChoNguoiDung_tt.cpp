#include <bits/stdc++.h>
using namespace std;

void processEmails(map<string, int>& Emails)
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
    
    // size_type is a (static) member type of the type vector<int>. Usually, it is a typedef for std::size_t
    for (vector<string>::size_type i = 0; i < fullname.size() - 1; i++) tmp += fullname[i][0];
    tmp.insert(0, fullname[fullname.size() - 1]);
    if (Emails.count(tmp) != 0)
    {
        int ordNum = Emails[tmp];
        ordNum++;
        email = tmp + to_string(ordNum) + address;
        cout << email << endl;
        Emails[tmp] = ordNum;
    }
    else
    {
        email = (tmp + address);
        cout << email << endl;
        Emails[tmp] = 1;
    }
}

int main()
{
    int t; cin >> t;
    cin.ignore();
    map<string, int> Emails;
    while (t--) processEmails(Emails);

    return 0;
}