#include <bits/stdc++.h>
using namespace std;

bool checkSold(vector<int> money, int n)
{
    int ticket = 25;
    int change[101] = {0};

    for (int i = 0; i < n; i++) 
    {
        if (money[i] == 25) 
            change[25]++; 
        else if (money[i] == 50) 
        {
            if (change[25] < 1) 
                return false; 
            change[25]--; 
            change[50]++; 
        } 
        else 
        {
            if (change[50] >= 1 && change[25] >= 1) 
            { 
                change[50]--; 
                change[25]--; 
            } 
            else if (change[25] >= 3) 
                change[25] -= 3; 
            else 
                return false; 
        }
    }
    return true; 
}

int main()
{
    int n;
    cin >> n;
    vector<int> money(n);
    for (int& it : money)
        cin >> it;

    if (checkSold(money, n))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}