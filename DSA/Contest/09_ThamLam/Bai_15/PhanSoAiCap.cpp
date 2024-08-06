#include <bits/stdc++.h>
#define ll long long
using namespace std;


void egyptian(int a, int b)
{
    if (a == 0 || b == 0) return;
    
    // neu b chia het cho a thi rut gon ve phan so don vi
    if (b % a == 0) {
        cout << 1 << "/" << b/a;
        return;
    }

    // tim phan so don vi lon nhat khong vuot qua a / b
    int x = b / a + 1;
    cout << 1 << "/" << x;
    cout << " + ";
    egyptian(a * x - b, b * x);
}

void solve()
{
    int P, Q; cin >> P >> Q;
    egyptian(P, Q);
}

int main()
{   
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    solve();
    return 0;
}