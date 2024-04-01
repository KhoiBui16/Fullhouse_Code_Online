#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main()
{
    string str;
    cin >> str;
    map<char, int> mp;
    vector<char> vec;
    for (char x : str)
    {
        mp[x]++; vec.push_back(x);
    }
    for (auto it : mp) cout << it.first << ' ' << it.second << '\n';
    cout << '\n';
    for (char x : vec)
    {
        if (mp[x] != 0)
        {
            cout << x << ' ' << mp[x] << '\n';
            mp[x] = 0;
        } 
    }
    return 0;
}