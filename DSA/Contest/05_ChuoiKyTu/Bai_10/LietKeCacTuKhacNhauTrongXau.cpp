#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    map<string, int > mp;
    vector<string> vec;
    string word = "";
    stringstream ss (str);
    while (ss >> word)
    {
        mp[word]++;
        vec.push_back(word);
    }
    for (auto it : mp) cout << it.first << ' ';
    cout << '\n';
    for (string it : vec)
    {
        if (mp[it] != 0)
        {
            cout << it << ' ';
            mp[it]= 0;
        }
    }

    return 0;
}