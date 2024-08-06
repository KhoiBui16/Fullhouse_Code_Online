#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    ll a = 0, b = 0, len1 = s1.size(), len2 = s2.size();
    for (ll i = len1 - 1; i >= 0; i--)
        a += (s1[i] - '0') * pow(2, len1 - i - 1);
    for (ll i = len2 - 1; i >= 0; i--)
        b += (s2[i] - '0') * pow(2, len2 - i - 1);
    cout << a * b;
    return 0;
}
