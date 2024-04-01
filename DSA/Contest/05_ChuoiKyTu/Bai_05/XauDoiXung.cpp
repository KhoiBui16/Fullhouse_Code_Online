#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isPalin(string str)
{
    int left = 0, right = str.size() - 1;
    while (left <= right)
    {
        if (str[left] != str[right]) return false;
        left++; right--;
    }
    return true;
}

int main()
{
    string str;
    getline(cin, str);
    string word;
    stringstream ss(str);
    while (ss >> word)
    {
        if (isPalin(word))
            cout << word << " ";
    }
    return 0;
}