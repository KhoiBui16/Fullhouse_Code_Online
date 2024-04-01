#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cin >> str;
    map<char, int> mp;
    for (char x : str) mp[x]++;
    int max = 0;
    char alpha = ' ';
    for (auto it : mp)
    {
        if (it.second > max) 
        {
            max = it.second;
            alpha = it.first;
        }
        else if (it.second == max && it.first > alpha) alpha = it.first;
    }
    cout << alpha << ' ' << max;
    return 0;
}