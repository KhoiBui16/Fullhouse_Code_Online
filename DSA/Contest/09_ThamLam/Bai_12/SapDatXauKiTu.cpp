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

    priority_queue<pair<int, char>> pq; // the queue follow the max_heap of freq
    for (auto& it : freq) 
        pq.push({it.second, it.first});

    // add the prev to follow the previous char
    pair<int, char> prev = {-1, '#'};
    while (!pq.empty()) {
        auto cur = pq.top();
        pq.pop();
        res += cur.second;
        
        if (prev.first > 0) pq.push(prev);
        cur.first--;
        
        if (pq.empty()) break;
        prev = cur;
    }   
    return (res.size() == s.size());
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