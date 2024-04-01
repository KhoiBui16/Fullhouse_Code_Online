#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin >> str;
    sort(str.begin(), str.end());
    cout << stoll(str);
    return 0;
}