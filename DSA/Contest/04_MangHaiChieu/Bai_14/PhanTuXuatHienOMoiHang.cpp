#include <iostream>
#include <map>
#include <algorithm>
#define MAX 100
using namespace std;

int main()
{
    int n;;
    cin >> n;
    int a[MAX + 1][MAX + 1];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    
    map<int, int> mp;

    for (int j = 1; j <= n; j++)
    {
        mp[a[1][j]] = 1;
    }
    
    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (mp[a[i][j]] == i - 1)
                mp[a[i][j]] = i;

    bool ok = false;
    for (auto it : mp)
    {
        if (it.second == n)
        {
            cout << it.first << " ";
            ok = true;
        }
    }

    if (ok == false)
        cout << "NOT FOUND";
    return 0;
}

/*
    #include<iostream>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int A[100][100];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    int mark[100000] = { 0 };
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (mark[A[i][j]] == i) 
                mark[A[i][j]] += 1;

    int ok = false;
    for (int i = 0; i < 100000; i++) 
    {
        if (mark[i] == n) 
        { 
            cout << i << " "; 
            ok = true;
        }
    }
    if (ok == false) cout << "NOT FOUND";

    return 0;
}

*/