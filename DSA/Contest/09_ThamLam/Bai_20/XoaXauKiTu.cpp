#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(string a, string b)
{
    return a.size() > b.size();
}

int solve()
{
    string s;
    cin >> s;
    s += "#";
    vector<string> v;
    string temp;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') temp += s[i];
        else 
        {
            v.push_back(temp);
            temp = "";
        }
    }
    sort(v.begin(), v.end(), cmp);
    ll res = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i % 2 == 0) // ti di truoc nen la di chan
            res += v[i].size();
    }
    return res;
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout << solve();
    return 0;
}