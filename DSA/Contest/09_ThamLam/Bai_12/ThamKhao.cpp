#include <bits/stdc++.h>
using namespace std;

bool checkString(string s)
{
    if (s.size() == 1) return true;
    string res = "";
    map<char, int> freq;
    for (string::size_type i = 0; i < s.size(); i++) {
        freq[s[i]]++;
    }

    vector<int> v;
    for (auto it : freq)
        v.push_back(it.second);
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < v.size() - 1; i++)
        sum += v[i];
    if (v[v.size() - 1] - 1 <= sum) // thi can toi thieu cac o trong la so co tan suat max - 1 tro len
        return true;
    return false;
}

void solve()
{
    string str;
    cin >> str;
    if (checkString(str)) cout << "YES";
    else cout << "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}