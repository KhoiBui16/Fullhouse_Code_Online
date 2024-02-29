#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream fileIn;
    fileIn.open("input.txt");

    ofstream fileOut;
    fileOut.open("output.txt");

    if (fileIn.is_open())
    {
        string str;
        while(getline(fileIn, str))
        {
            fileOut << str << endl;
        }
        
    }
    else
    {
        cout << "FIle bi loi trong qua trinh mo!\n";
    }

    fileIn.close();
    fileOut.close();
    return 0;
}

