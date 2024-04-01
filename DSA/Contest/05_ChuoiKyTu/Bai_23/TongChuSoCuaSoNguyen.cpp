#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    long long sum = 0;
    for (vector<string>::size_type i = 0; i < str.size(); i++)
        sum += (str[i] - '0');
    cout << sum;
    return 0; 
}