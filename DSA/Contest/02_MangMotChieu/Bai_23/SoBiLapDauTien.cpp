#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long> arr(n);
    for (long& it : arr)
        cin >> it;

    map<int, long> TanSuat;
    int soLanLap = 0;
    long SoLapDauTien = -1;

    for (int i = 0; i < n; i++)
    {
        soLanLap += TanSuat[arr[i]];
        TanSuat[arr[i]]++;

        if (soLanLap == 1)
        {
            SoLapDauTien = arr[i];
            break;
        }
    }
    
    if (SoLapDauTien != -1)
        cout << SoLapDauTien;
    else
        cout << -1;

    return 0;
}