#include <bits/stdc++.h>
#define MAX 100
using namespace std;

int n, cnt = 0;
int col[MAX], d1[MAX], d2[MAX];

void Try(int i) // bat dau lam theo huong duyet hang
{
    // duyet cot
    for (int j = 1; j <= n; j++) {
        // kiem tra cot va 2 duong cheo chua dat quan hau
        if (col[j] == 0 && d1[i + j - 1] == 0 && d2[i - j + n] == 0) {
            // danh dau lai
            col[j] = 1;
            d1[i + j - 1] = 1;
            d2[i - j + n] = 1;
            if (i == n) cnt++;
            else Try(i + 1);
        
            // backtracking
            col[j] = 0;
            d1[i + j - 1] = 0;
            d2[i - j + n] = 0;
        
        }
    } 
}  

void solve()
{
    cin >> n;
    // khoi tao
    memset(col, 0, sizeof(col));
    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
    cnt = 0;
    Try(1);
    cout << cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}