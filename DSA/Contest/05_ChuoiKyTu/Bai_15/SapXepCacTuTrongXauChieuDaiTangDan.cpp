#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{   
    string str;
    getline(cin, str);
    vector<string> vec;
    string word = "";
    stringstream ss(str);
    while(ss >> word) vec.push_back(word);
    sort(vec.begin(), vec.end(), [](const string& a, string& b) {
        if (a.size() != b.size()) return a.size() < b.size();
        else return a < b;
    });
    for (string s : vec) cout << s << ' ';
    return 0;
}