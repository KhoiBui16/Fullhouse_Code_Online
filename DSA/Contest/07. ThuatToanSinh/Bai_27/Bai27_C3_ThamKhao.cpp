#include <iostream>
#include <vector>
using namespace std;

char lastChar;
int length;

vector<string> result;

void generateStrings(char currentChar, int remainingLength, string currentString)
{
    if (remainingLength == 0)
    {
        result.push_back(currentString);
        return;
    }

    for (char c = currentChar; c <= lastChar; ++c)
    {
        string newString = currentString + c;
        generateStrings(c, remainingLength - 1, newString);
    }
}

void listStrings(char lastChar, int length)
{
    result.clear();
    generateStrings('A', length, "");

    for (const string &s : result)
    {
        cout << s << endl;
    }
}

int main()
{
    cin >> lastChar >> length;
    listStrings(lastChar, length);
    return 0;
}
